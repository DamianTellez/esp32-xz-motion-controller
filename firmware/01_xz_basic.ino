***********************************************
 * ESP32
 * Z -> Actuador DC mediante L298N
 * X -> Motor paso a paso mediante DRV8825
 ************************************************/

// -------- Z (L298N) --------
#define IN1 18
#define IN2 19

// -------- X (DRV8825) --------
#define STEP_PIN 25
#define DIR_PIN 26

//---------------------------------

void setup() {

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

}

//---------------------------------

void subirZ(int tiempo_ms)
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  delay(tiempo_ms);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void bajarZ(int tiempo_ms)
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  delay(tiempo_ms);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

//---------------------------------

void moverX(long pasos, bool direccion)
{
  digitalWrite(DIR_PIN, direccion);

  delay(5);

  for(long i = 0; i < pasos; i++)
  {
      digitalWrite(STEP_PIN, HIGH);
      delayMicroseconds(700);

      digitalWrite(STEP_PIN, LOW);
      delayMicroseconds(700);
  }
}

//---------------------------------

void loop()
{

  // Mover 300 pasos en sentido contrario
  moverX(300, LOW);

  delay(500);

  subirZ(1000);

  delay(300);

  bajarZ(1000);

  while(true);

}
