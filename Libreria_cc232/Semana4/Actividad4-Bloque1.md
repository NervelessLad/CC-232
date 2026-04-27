Actividad4-Bloque 1
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
8.
