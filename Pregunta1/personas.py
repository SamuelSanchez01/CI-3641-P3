class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

class ConjuntoPersonas:
    def __init__(self):
        self.personas = []

    def agregarPersona(self, persona):
        self.personas.append(persona)

    def cantidad(self):
        return len(self.personas)

    def mayoresDeEdad(self):
        return [p for p in self.personas if p.edad >= 18]

    def nombreMasComun(self):
        from collections import Counter
        nombres = [p.nombre for p in self.personas]
        if not nombres:
            return None
        return Counter(nombres).most_common(1)[0][0]


personas = ConjuntoPersonas()
personas.agregarPersona(Persona("Juan", 20))
personas.agregarPersona(Persona("Ana", 22))
personas.agregarPersona(Persona("Juan", 17))

print("Cantidad de personas:", personas.cantidad())
print("Mayores de edad:", [p.nombre for p in personas.mayoresDeEdad()])
print("Nombre más comun:", personas.nombreMasComun())
