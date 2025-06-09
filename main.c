/**
 * Aluna: Maria Eduarda de Mello Policante - RA134539
 * Disciplina: Programação para Interfaceamento de Hardware e Software
*/

#include <stdio.h>
#include "pocketpy.h"
#include "levenshtein.h"

bool py_levenshtein(int argc, py_Ref argv) {
    /**
     * Função de extensão da função de levenshtein para a chamada em Python.
    */

    // checagem dos argumentos passados pelo script Python para a função levenshtein
    PY_CHECK_ARGC(2); // número
    PY_CHECK_ARG_TYPE(0, tp_str); // tipo
    PY_CHECK_ARG_TYPE(1, tp_str);

    const char* _s1 = py_tostr(py_arg(0)); // obtenção dos parâmetros para a função de levenshtein
    const char* _s2 = py_tostr(py_arg(1));

    int res = levenshtein(_s1, _s2); // aplicação da função da biblioteca levenshtein.h

    py_newint(py_retval(), res); // extenção do resultado obtido pela função para o script Python

    return true;  
}

int main(){
    // Leitura do script Python
    FILE *arq = fopen("script.py", "r");
    char program[10000];

    fread(program, 1, 1000, arq);

    fclose(arq);

    py_initialize(); // Inicialização do interpretador embutido Python

    py_GlobalRef mod = py_getmodule("__main__");
    py_bindfunc(mod, "levenshtein", py_levenshtein); // definição da assinatura da função no script Python

    if (!py_exec(program, "", EXEC_MODE, NULL)) { // execução do programa Python
        py_printexc();
    }

    py_finalize();

    return 0;
}