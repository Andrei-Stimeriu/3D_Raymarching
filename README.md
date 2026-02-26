Grafică 3D (GLSL (într-un shader), C++ SFML)
Tehnica Raymarching (cu umbre, lumină ambientală, culori și blending (forme și culori))

Imaginile sunt generate în timp real.
Am scris un „fragment shader”, care preia ca date de intrare coordonatele pixelului căruia doresc să îi stabilesc culoarea și, după niște calcule, returnează culoarea. Astfel, în teorie, culoarea fiecărui pixel din imagine poate fi calculată independent, în paralel, sporind cu mult viteza de execuție.
Am folosit tehnica Ray Marching (Signed Distance Functions). Obiectele se deplasează conform unor funcții trigonometrice și folosește o matrice de rotire (bazată pe înmulțirea numerelor complexe). Deasemenea am scris o funcție care unește obiectele cu un efect de „topire” care combină și culorile acelor obiecte ce se unesc („smooth minimum”).

