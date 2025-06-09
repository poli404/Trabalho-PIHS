#include <stdio.h>
#include "pocketpy.h"
#include "levenshtein.h"

bool py_levenshtein(int argc, py_Ref argv) {

    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_str);
    PY_CHECK_ARG_TYPE(1, tp_str);

    const char* _s1 = py_tostr(py_arg(0));
    const char* _s2 = py_tostr(py_arg(1));

    int res = levenshtein(_s1, _s2);

    py_newint(py_retval(), res);

    return true;  
}

int main(){
    FILE *arq = fopen("script.py", "r");
    char program[10000];

    fread(program, 1, 1000, arq);

    fclose(arq);

    py_initialize();

    py_GlobalRef mod = py_getmodule("__main__");
    py_bindfunc(mod, "levenshtein", py_levenshtein);

    if (!py_exec(program, "", EXEC_MODE, NULL)) {
        py_printexc();
    }

    py_finalize();

    return 0;
}