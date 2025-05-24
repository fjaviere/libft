# Libft

## Descripción

Libft es tu primera librería en C. Consiste en reescribir funciones estándar de la libc y crear otras adicionales. Esta librería será una herramienta muy útil para futuros proyectos del cursus de 42.

---

## Nombre del programa

**libft.a**

---

## Archivos a entregar

- Makefile  
- libft.h  
- ft_*.c

---

## Reglas del Makefile

Debe incluir las siguientes reglas:  
**NAME**, **all**, **clean**, **fclean**, **re**

---

## Funciones autorizadas

- malloc  
- free (solo para calloc y strdup)  
- ar (para crear la librería)

No se permite usar **libtool** ni declarar **variables globales**.

---

## Consideraciones técnicas

- No declarar variables globales.  
- Si divides funciones, usa `static` para mantenerlas en el archivo correcto.  
- Todos los archivos deben estar en la raíz del repositorio.  
- No entregar archivos no utilizados.  
- Compilar con las flags: **-Wall -Werror -Wextra**.  
- La librería **libft.a** debe crearse en la raíz.

---

## Parte 1 - Funciones de la libc

Reimplementación de funciones de la libc, con el prefijo `ft_`:

- isalpha → ft_isalpha  
- isdigit → ft_isdigit  
- isalnum → ft_isalnum  
- isascii → ft_isascii  
- isprint → ft_isprint  
- strlen → ft_strlen  
- memset → ft_memset  
- bzero → ft_bzero  
- memcpy → ft_memcpy  
- memmove → ft_memmove  
- strlcpy → ft_strlcpy  
- strlcat → ft_strlcat  
- toupper → ft_toupper  
- tolower → ft_tolower  
- strchr → ft_strchr  
- strrchr → ft_strrchr  
- strncmp → ft_strncmp  
- memchr → ft_memchr  
- memcmp → ft_memcmp  
- strnstr → ft_strnstr  
- atoi → ft_atoi  
- calloc → ft_calloc  
- strdup → ft_strdup

---

## Parte 2 - Funciones adicionales

Funciones nuevas o que funcionan diferente a la versión de libc:

- ft_substr  
- ft_strjoin

Estas funciones deben usar `malloc` para reservar memoria.

---

## Organización del proyecto

Todos los archivos `.c`, `libft.h` y `Makefile` deben estar en la raíz del repositorio. El archivo **libft.a** también debe generarse ahí.

---

## Nota final

Este proyecto es una base muy importante. Te ayudará a entender en profundidad cómo funcionan muchas funciones del lenguaje C y a desarrollar buenas prácticas para futuros proyectos.
