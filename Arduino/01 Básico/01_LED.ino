/*
    LED

    Turns an LED on for one second, then off for one second, repeatedly.
    
    Copyright © 2021, Rodrigo Ernesto Alvarez Aguilera <incognia@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Version 0.1 - March 23, 2021
    Author: Rodrigo Ernesto Alvarez Aguilera
*/

// Definimos nuestra primera variable (tiempo) de tipo entero (int)
int tiempo = 1000;                      // El valor está en milisegundos

// La función «setup» se ejecuta una sola vez cuando encendemos la tarjeta
void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);       // Configutramos el LED integrado como salida
}

// La función «loop» se ejecuta indefinidamente mientras la tarjeta tenga energía
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);    // Encendemos LED integrado (HIGH)
    delay(tiempo);                      // Esperamos un segundo
    digitalWrite(LED_BUILTIN, LOW);     // Apagamos LED integrado (LOW)
    delay(tiempo);                      // Esperamos un segundo
}