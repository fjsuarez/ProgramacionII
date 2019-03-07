#!/bin/bash

mi_funcion() {
	local VARIABLE_LOCAL=9
	echo "La VARIABLE_LOCAL puede ser accedida dentro de mi_funcion: $VARIABLE_LOCAL"
}

mi_funcion

echo "VARIABLE_LOCAL no puede ser accedida fuera de mi_funcion: $VARIABLE_LOCAL"
