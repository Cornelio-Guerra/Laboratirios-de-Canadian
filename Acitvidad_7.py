#Este es un código simple de login
actualuser = 'program'
actualpassword = '4321'
#declaramos el nombre del usuario y la contraseña (estos no cambian)
user = input('\nIngrese su Usuario\n')
password = input('\nIngrese su Contraseña\n')
#En esta sección se le solicita al usuario su contraseña y su nombre de usuario
if (user == actualuser and password == actualpassword):
#Aqui comparamos el usuario ingresado con el usuario establecido al comienzodel programa, se hace lo mismo con la contraseña
#Usamos (and) porque este hace que el if solo de cumpla si las dos comparaciones son correctas
 print('\nBienvenido '+ actualuser +' al sistema')
#El print le de confirmación al usuario de que ingreso el usuario y contraseñacorrectos
else:
 print('\nERROR: Contraseña o Usuario Erróneos\intente de nuevo')
#Esta parte solo de ejecuta si el usuario ingreso algo mal
#Tambien se notifica al usuario de que ingreso algo mal