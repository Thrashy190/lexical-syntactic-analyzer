import re

identificador = r'[a-zA-Z][a-zA-Z0-9_]*[$%&@?]'
entero = r'[0-9]+'
real = r'[0-9]+\.[0-9]+'
string = r'\".*?\"'
logico = r'verdadero|falso'
operador_aritmetico = r'[\+\-\*/=]'
operador_relacional = r'<=|>=|!=|<|>|=='
operador_logico = r'!|\|\.|&'
palabra_reservada = r'programa|inicio|fin|leer|escribir|entero|real|cadena|logico|si|sino|entonces|mientras|hacer' \
                    r'|repetir|hasta|variables'
parentesis_abre = r'\('
parentesis_cierra = r'\)'
punto_y_coma = r';'
coma = r','
dos_puntos = r':'
comentario = r'//.*'
blanco = r'[ \t]'
fin_de_linea = r'\n'

tokens_titulo = {
    'identificador': identificador,
    'real': real,
    'entero': entero,
    'string': string,
    'logico': logico,
    'operador_relacional': operador_relacional,
    'operador_aritmetico': operador_aritmetico,
    'operador_logico': operador_logico,
    'palabra_reservada': palabra_reservada,
    'parentesis_abre': parentesis_abre,
    'parentesis_cierra': parentesis_cierra,
    'punto_y_coma': punto_y_coma,
    'coma': coma,
    'dos_puntos': dos_puntos,
    'comentario': comentario,
    'fin_de_linea': fin_de_linea,
    'blanco': blanco,
}

tokens = {
    'palabra_reservada': {
        'programa': -1,
        'inicio': -2,
        'fin': -3,
        'leer': -4,
        'escribir': -5,
        'si': -6,
        'sino': -7,
        'mientras': -8,
        'repetir': -9,
        'hasta': -10,
        'entero': -11,
        'real': -12,
        'cadena': -13,
        'logico': -14,
        'variables': -15,
        'entonces': -16,
        'hacer': -17
    },
    'operador_aritmetico': {
        '*': -21,
        '/': -22,
        '+': -24,
        '-': -25,
        '=': -26
    },
    'operador_relacional': {
        '<': -31,
        '<=': -32,
        '>': -33,
        '>=': -34,
        '==': -35,
        '!=': -36,
    },
    'operador_logico': {
        '&': -41,
        '|': -42,
        '!': -43,
    },
    'identificador': {
        '$': -51,
        '%': -52,
        '&': -53,
        '@': -54,
        '?': -55,
    },
    'entero': {
        'entero': -61
    },
    'real': {
        'real': -62
    },
    'string': {
        'string': -63
    },
    'logico': {
        'verdadero': -64,
        'falso': -65
    },
    'parentesis': {
        '(': -73,
        ')': -74
    },
    'punto_y_coma': {
        ';': -75
    },
    'coma': {
        ',': -76
    },
    'dos_puntos': {
        ':': -77
    },
}


def tokenizar(nombre_token, token, linea):
    switch_dict = {
        'identificador': lambda token_search: (tokens['identificador'][token_search[-1]], token_search, -2, linea),
        'entero': lambda token_search: (tokens['entero']['entero'], token_search, -1, linea),
        'real': lambda token_search: (tokens['real']['real'], token_search, -1, linea),
        'string': lambda token_search: (tokens['string']['string'], token_search, -1, linea),
        'logico': lambda token_search: (tokens['logico'][token_search], token_search, -1, linea),
        'operador_aritmetico': lambda token_search: (tokens['operador_aritmetico'][token_search], token_search, -1, linea),
        'operador_relacional': lambda token_search: (tokens['operador_relacional'][token_search], token_search, -1, linea),
        'operador_logico': lambda token_search: (tokens['operador_logico'][token_search], token_search, -1, linea),
        'palabra_reservada': lambda token_search: (tokens['palabra_reservada'][token_search], token_search, -1, linea),
        'parentesis_abre': lambda token_search: (tokens['parentesis']['('], token_search, -1, linea),
        'parentesis_cierra': lambda token_search: (tokens['parentesis'][')'], token_search, -1, linea),
        'punto_y_coma': lambda token_search: (tokens['punto_y_coma'][';'], token_search, -1, linea),
        'coma': lambda token_search: (tokens['coma'][','], token_search, -1, linea),
        'dos_puntos': lambda token_search: (tokens['dos_puntos'][':'], token_search, -1, linea)
    }
    return switch_dict.get(nombre_token, (-100, token, -0, linea))


def analizar_archivo(codigo_fuente):
    lista_tokens = []
    lista_errores = []

    for index, linea in enumerate(codigo_fuente.splitlines()):

        linea = re.sub(comentario, '', linea)
        i = 0

        while i < len(linea):
            for nombre_token, expresion_regular in tokens_titulo.items():
                match = re.match(expresion_regular, linea[i:])
                if match:
                    token = match.group(0)
                    if nombre_token != 'blanco' and nombre_token != 'fin_de_linea':
                        lista_tokens.append(tokenizar(nombre_token, token, index+1)(token))
                    i += len(token)
                    break
            else:
                lista_errores.append((linea[i], index+1))
                i += 1

    return lista_tokens, lista_errores
