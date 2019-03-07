# Tarea 2

1. Escribir un script que vea si /etc/shadow existe. Si no existe, mostrar "Los shadow passwords estan activos". Luego chequear si puedo escribir en ese archivo. Si se puede, mostrar "Tienes permisos para editar /etc/shadow". Sino, mostrar "NO tienes permisos para editar /etc/shadow".

2. Escribir un script que muestre "hombre", "oso", "chancho", "prro", "gato" y "oveja" en la pantalla cada uno en una linea separada.

3. Escribir un script que le pida al usuario un archivo o directorio y reporte si es un archivo regular, directorio u otro tipo de archivo.

4. Escribir un script que acepte un archivo o directorio como argumento en vez de pedirselo al usuario.

5. Modificar el anterior script para aceptar un numero ilimitado de argumentos.

6. Escribir un script que muestre "Este script saldra con un exit status de 0". Asegurarse que efectivamente devuelve un status igual a 0.

7. Escribir un script que acepte un archivo o directorio como argumento. Reporte si es un archivo regular, un directorio u otro tipo de archivo. Devolver un status de 0 si es regular, 1 si es direcotrio, 2 si es otro tipo.

8. Escribir un script que ejecute el comando "cat /etc/shadow". Si el comando devuelve 0, mostrar "Comando ejecutado exitosamente. Si el comando devuelve un status diferente a 0, reportar "Comando fallo" y devolver 1.

9. Escribir un script que consista de una funcion que muestre el numero de archivos en la carpeta actual. Nombrar esta funcion "contar_archivos" y llamarla en el script. Si usas una variable, asegurate de hacerla local.

10. Modificar el anterior script, haciendo que la funcion "contar_archivos" acepte un argumento. Luego, hacer que la funcion muestre el nombre del directorio seguido por punto y coma. Por ultimo, mostrar el nombre de archivos en la siguiente linea. Llamar esta funcion 3 veces. Primero en el directorio "/etc", luego en el directorio "/var" y por ultimo en el directorio "/usr/bin".
