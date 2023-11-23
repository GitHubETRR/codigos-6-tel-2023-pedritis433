def multi(dato1, dato2):
    return dato1 * dato2
    
def divid(dato1, dato2):
    return dato1 / dato2

print ('//////////////////////////////////////////')
print ('Bienvenido al programa que le permite calcular ley de ohm')

while True:
    print ('//////////////////////////////////////////')
    print ('Ingrese el tipo de dato que desea calcular')
    print ('1 = Voltaje')
    print ('2 = Corriente')
    print ('3 = Resistencia')
    print ('4 = Potencia')
    print ('//////////////////////////////////////////')
    tDato = input('Tipo de dato: ')
    if tDato in ('1', '2', '3', '4'):
        
        if tDato == '1':
            corriente = int(input('Ingrese la corriente: '))
            resistencia = int(input('Ingrese la resistencia: '))
            print('La tensión es de: ', multi(corriente, resistencia),'V')
        elif tDato == '2':
            voltaje = int(input('Ingrese el voltaje: '))
            resistencia = int(input('Ingrese la resistencia: '))
            print('La corriente es de: ', divid(voltaje, resistencia),'A')
        elif tDato == '3':
            voltaje = int(input('Ingrese el voltaje: '))
            corriente = int(input('Ingrese la corriente: '))
            print('La resistencia es de: ', divid(voltaje, corriente),'Ω')
        elif tDato == '4':
            voltaje = int(input('Ingrese el voltaje: '))
            corriente = int(input('Ingrese la corriente: '))
            print('La potencia es de: ', multi(voltaje, corriente),'W')
            
        menu = input('Si desea realizar otra acción, ingrese 1, si no, ingrese cualquier número: ')
        if menu != '1':
            print ('/////////////////////////////////////')
            print ('Gracias por utilizar nuestro servicio')
            print ('/////////////////////////////////////')
            break
    else:
        print("---------------")
        print("OPCIÓN INVÁLIDA")
        print("---------------")
