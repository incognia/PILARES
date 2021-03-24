# PILARES

## Puntos de Innovación, Libertad, Arte, Educación y Saberes

Son puntos de encuentro de y para la ciudadanía, en ellos encontrarás:
ciberescuelas, disciplinas artísticas, actividades deportivas, talleres de emprendimiento y capacitación para el empleo.

## Robótica aplicada

Es un catalizador de los ingenios, imaginación e innovación de las personas, para que, a partir de la imaginación, puedan crear. Este taller aborda un amplio conjunto de ciencias y ramas del conocimiento, como: la electrónica digital, la mecánica, la electricidad y la programación (Arduino Uno, C y Python). Adicionalmente, se utiliza el enfoque Ciencias, Tecnología, Ingeniería, Artes y Matemáticas para los proyectos que se van desarrollando.

## Rodrigo Álvarez

A pesar de haber nacido a finales de los años 70, me considero un nativo digital. Desde pequeño tuve habilidad para desarmar cosas, desmantelaba los coches de control remoto de mi hermano mayor, el tocadiscos, la licuadora, la tele, el microondas, la videocasetera, la lavadora y hasta el motor del vocho de mi mamá. Siempre tuve mucha curiosidad por conocer y entender el funcionamiento de las máquinas.

Mi acercamiento a la tecnología fue muy temprano, cuando tenía unos 4 o 5 años: mi papá trabajaba con un **mainframe** IBM; fue ahí, sentado en las piernas de algún operador de **terminal** cuando utilicé una computadora por primera vez. El centro de cómputo era un lugar enorme, muy frío y ruidoso. Había unos gabinetes muy grandes, parecidos a la baticomputadora que salía en la serie de Adam West. Recuerdo que los operadores escondían refrescos debajo de las rejillas del aire acondicionado y siempre tenían una chaparrita de uva reservada para mi.

Desde el principio tuve que trabajar con diferentes sistemas operativos. En la empresa teníamos un buen surtido: Unix Tru64, OS/400, Netware 4.11, AmigaOS 3.5, Mac OS 9, DOS 6 y Windows 95. Nunca me casé con ninguno, aunque desde siempre odié las máquinas con Windows y a los usuarios de Mac.

Años más tarde, mientras intentaba recuperar unos archivos de la computadora del director general, conocí Linux y fue amor a primera vista. Era un Conectiva Linux 5, una distribución brasileña que más tarde se fusionó con Mandrake ─una distribución francesa─ para formar Mandriva. Esa misma semana también probé un SuSE 7.

Si bien me acerqué a GNU/Linux por razones prácticas, me quedé en el mundo del software libre cuestiones filosóficas. No volví a ser el mismo después de de leer «**El derecho a leer**», de Richard Stallman, y «**La catedral y el bazar**» de Eric S. Raymond. Casi no podía creer que existieran personas con un conocimiento técnico altamente especializado y que decidieran compartirlo voluntaria y gratuitamente.

```arduino
int tiempo = 500;

void setup()
{
    for(int led=2; led<=13; led++){
        pinMode(led, OUTPUT);
    }
}

void loop()
{
    for(int led=2; led<=13; led++){
        digitalWrite(led, HIGH);
        delay(tiempo);
        digitalWrite(led, LOW);
    }
    for(int led=13; led>=2; led--){
        digitalWrite(led, HIGH);
        delay(tiempo);
        digitalWrite(led, LOW);
    }
}
```