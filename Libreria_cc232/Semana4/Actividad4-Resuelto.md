Actividad4-Resuelto

Bloque 1: 

1. Stack se usa para problemas como evaluación de expresiones y N-Reinas (donde necesitas deshacer en orden inverso), mientras que Queue se usa en la simulación bancaria (donde necesitas atender clientes en orden de llegada).
2. Stack modela la naturaleza de los problemas recursivos y con retroceso.
3. La razón es que Queue refleja el principio fundamental de equidad: quien llega primero, se atiende primero.
4. en lugar de dejar que el sistema maneje la pila para ti (implícito), la manejas explícitamente con una estructura de datos que defines.
5. La información mínima es exactamente lo que necesitas para:

Verificar si la decisión anterior fue válida
Deshacer y volver atrás si algo falló
Continuar con la siguiente decisión
6. ambas son matemáticamente equivalentes, pero el control de cómo continúa la ejecución es radicalmente diferente:

Recursiva: el sistema decide automáticamente (implícito)
Iterativa: tú lo haces explícitamente (visible)
7. Las aperturas pendientes son la información esencial y mínima que necesitas guardar para que, cuando llegue un cierre, puedas responder: "¿hay una apertura sin cerrar del tipo correcto?"

Sin eso, sería imposible verificar en un solo recorrido.
8. Dos pilas son esenciales porque:

Tipos diferentes: números vs símbolos
Reglas de extracción diferentes: operadores por precedencia, operandos en pares
Estados independientes: más números que operadores pendientes
Inspección selectiva: necesitas ver operadores sin tocar números
Una sola pila violaría toda la lógica del algoritmo.
9. N-Reinas y laberinto son ejemplos naturales de backtracking porque:

Su estructura requiere deshacer decisiones
Usas una pila para registrar exactamente qué deshacer
Es el enfoque más directo para estos problemas
No es que forzamos backtracking; es que estos problemas naturalmente necesitan exploración con retroceso.
10. Stack NO funciona para bancos porque violaría la equidad.

Queue funciona para bancos porque respeta el principio fundamental: quien espera más, se atiende primero.

No es solo una preferencia de diseño; es una exigencia ética del sistema: un banco que usara Stack estaría atendiendo a clientes en orden inverso a como llegaron, lo cual es injusto.
11. La relación es una cadena de dependencias:

Estructura auxiliary correcta → implementa fielmente push/pop
Estado parcial correcto → contiene exactamente lo que hiciste
Correctitud del algoritmo → garantizada por los dos anteriores
Si cualquiera falla, falla todo. No puedes tener correctitud sin mantener el estado parcial, y no puedes mantener el estado parcial sin una estructura auxiliary confiable.

Es por eso que los headers de Semana4 son tan cuidadosos: cada implementación de Stack y Queue es una promesa de que el estado parcial será correcto.
12. Resolver = ¿Cuál es la respuesta?

Input fijo → Algoritmo → Output único
Ejemplo: "¿Hay 2 soluciones en N=4?" Respuesta: SÍ.
Simular = ¿Cómo evolucionó?

Sistema dinámico → Pasos en el tiempo → Historia de eventos
Ejemplo: "¿Cómo se distribuyeron los clientes?" Respuesta: Una línea de tiempo.
En Semana 4:

Conversión, paréntesis, evaluación, N-Reinas, laberinto = RESOLVER
Banco = SIMULAR

Bloque 2: 

1. Stack: Lo que ves es lo que sacas → 9 es el más reciente
Queue: Lo que ves es lo que sacas → 10 es el más antiguo
El contraste numérico (9 vs 10) es la prueba visual de LIFO vs FIFO.
2. .prueba empíricamente que son equivalentes funcionalmente, sin importar si una usa recursión implícita y la otra iteración explícita.

Es una prueba de caja negra: entrada idéntica → salida idéntica = implementaciones equivalentes.
3. La existencia de los tres resultados simultáneamente y coherentes demuestra:

Validación funcionó → true
Transformación funcionó → RPN con tokens claros
Evaluación funcionó → número válido sin errores
Si alguno fallara, los otros no existirían o serían inválidos.

Es la prueba de que la cadena completa (verificación → transformación → evaluación) es correcta.
4. solutions	Configuraciones válidas encontradas
   checks	Comparaciones individuales realizadas
Es como decir:

Solutions: "Encontré 2 rutas válidas al destino"
Checks: "Pero exploré 42 puntos de decisión para encontrarlas"
5. La secuencia de coordenadas es la prueba de que:

La pila en labyrinth() correctamente registró cada paso
El algoritmo retrocedió cuando fue necesario (por eso encontró esta ruta)
El camino es válido y completo
Sin la secuencia, solo dirías "hay un camino". Con la secuencia, puedes verificar visualmente que ese camino es real.
6. Cada instante t captura el estado de equilibrio del sistema:

Cuántos clientes hay en cada cola
Cuál cliente está siendo atendido (primero de cada lista)
Cuál es el orden de espera (resto de la lista)
La simulación demuestra cómo la selección de "ventanilla más corta" distribuye clientes de forma que ninguna cola crece demasiado.
7. Pero lo que visualmente demuestra la idea es que:

Stack resuelve 4 problemas completamente distintos
Queue resuelve otro tipo de problema
Todas funcionan en un mismo demo
Es un "panorama" porque muestra que dos estructuras simples (Stack y Queue) son herramientas versátiles para resolver problemas de capítulo 4 de Deng.

El output completo es la prueba: mismas estructuras, aplicaciones radicalmente diferentes.

