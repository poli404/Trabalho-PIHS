# Interpretador Embutido e Extensor Python em C

Aluna: Maria Eduarda de Mello Policante - RA13439

Professor: Marcelo de Gomensoro Malheiros

Disciplina: Programação para Interfaceamento de Hardware e Software

## Objetivo
Demonstrar níveis de integração:
- entre módulos e bibliotecas de funções escritas na linguagem C;
- entre código fonte Python embutido via interpretador em uma aplicação escrita na linguagem C;
- entre código fonte Python estendido através de novas funcionalidades implementadas via chamada de funções escritas na linguagem C.

## Observações
- O arquivo LICENSE adotado é referente à biblioteca externa: levenshtein.c

## Compilação
É necessário o compilador gcc para a linguagem C.
```bash
make       # compila o projeto para o executável main
make run   # executa o projeto - se necessário faz a compilação
make clean # remove os arquivos obejto (.o) e o executável
```
