#esto creo que es asi

class Church:
    def __init__(self, func):
        self.func = func

Cero = Church(lambda f: lambda x: x)
def Suc(n):
    return Church(lambda f: lambda x: f(n.func(f)(x)))

def suma(m, n):
    return Church(lambda f: lambda x: m.func(f)(n.func(f)(x)))

def multiplicacion(m, n):
    return Church(lambda f: lambda x: m.func(n.func(f))(x))
