# esp32-xz-motion-controller

Control de un sistema de movimiento de dos ejes (X-Z) utilizando un ESP32.

## Objetivo

Desarrollar progresivamente un sistema capaz de controlar la posición
de los ejes X y Z mediante motores/actuadores, utilizando un ESP32.

## Hardware

- ESP32 WROVER
- DRV8825
- L298N
- Motor paso a paso / actuador para eje X
- Actuador lineal 12 V para eje Z
- Batería 12 V 7.2 Ah

## Ejes

### X
Controlado mediante DRV8825.

### Z
Controlado mediante L298N.

## Estado actual


- [x] Prueba del eje Z
- [x] Prueba básica del eje X
- [ ] Control simultáneo X-Z
- [ ] Calibración de X
- [ ] Calibración de Z
- [ ] Posicionamiento absoluto
- [ ] Homing
- [ ] Límites de seguridad
- [ ] Control en lazo cerrado

## Development Log

Ver `/experiments/` para el registro cronológico
de pruebas y resultados.
