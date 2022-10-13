

import turtle

tur = turtle.Turtle()

tur.pencolor("red")

x = (-39, 48)
y = (50, -50)

tur.penup()
tur.goto(x)
tur.write("("+str(x)+")")
tur.pendown()
tur.goto(y)
tur.write("("+str(y)+")")
turtle.done()
