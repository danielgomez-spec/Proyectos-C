% Ejercicio1
max(X, Y, X) :- X >= Y.
max(X, Y, Y) :- Y >= X.


%Ejercicio2
reinado('Carlos II', 1665, 1700).
reinado('Felipe V', 1700, 1724).
reinado('Luis I', 1724, 1724).
reinado('Felipe V', 1724, 1746).
rige(Persona, N) :-
    reinado(Persona, A, B),
    A =< N,
    N =< B.
%BOnus
rige(Persona, X, Y) :-
    reinado(Persona, A, B), B >= X, A =< Y.

%Ejercicio3
% Definición de los tiempos verbales
tiempo(presente).
tiempo(pasado).
tiempo(futuro).

% Definición de las personas gramaticales
persona(primera).
persona(segunda).
persona(tercera).

% Definición de los números gramaticales
numero(singular).
numero(plural).

% Definición de la conjugación del verbo "to be"

ser(presente, primera, singular, "am").
ser(presente, segunda, singular, "are").
ser(presente, tercera, singular, "is").
ser(presente, primera, plural, "are").
ser(presente, segunda, plural, "are").
ser(presente, tercera, plural, "are").

ser(pasado, primera, singular, "was").
ser(pasado, segunda, singular, "were").
ser(pasado, tercera, singular, "was").
ser(pasado, primera, plural, "were").
ser(pasado, segunda, plural, "were").
ser(pasado, tercera, plural, "were").

ser(futuro, primera, singular, "will be").
ser(futuro, segunda, singular, "will be").
ser(futuro, tercera, singular, "will be").
ser(futuro, primera, plural, "will be").
ser(futuro, segunda, plural, "will be").
ser(futuro, tercera, plural, "will be").

% Conjugacion del verbo "to be"
conjugar_verbo(Verbo, Tiempo, Persona, Numero, Conjugacion) :-
    tiempo(Tiempo),
    persona(Persona),
    numero(Numero),
    (   Verbo = "to be" -> 
        ser(Tiempo, Persona, Numero, R),
        Conjugacion = R
    ;   Conjugacion = Verbo 
    ).

