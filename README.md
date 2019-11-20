# README

1. Con lambda = 1 la ecuación se puede reescribir como x''+ (k/m) x = 0. Esta es una ecuación diferencial ordinaria de segundo orden homogénea. Se reconoce como la ecuación del oscilador armónico.

2. La solución a esta ecuación diferencial es de la forma x(t) = A cos(w*t + phi) donde las constantes A y phi se pueden determinar a partir de dos conditiones iniciales para x y x'. Además, w = sqrt(k/m)

3. Al ejecutar el makefile se imprimen los valores solicitados y se crea el archivo euler.dat. Estos archivo es leído por el script de python.

4. La solución cuya gráfica se muestra en el archivo euler.png no es lo esperado, pues se esperaba que la solución fuera de la forma que se indica en la respuesta 2., es decir, una función sinusoidal. En contraste, aunque la solución si oscila, la amplitud aumenta con el tiempo, que es algo que no debería suceder.