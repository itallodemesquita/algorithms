# 📚 Estudo de funções em linguagem C
Bem-vindo(a) a este repositório! Aqui você encontrará materiais úteis sobre funções em linguagem C. Este projeto é baseado no conteúdo programático da disciplina de Algoritmos/Algoritmos de Programação da UFERSA. O objetivo é disponibilizar resumos, exercícios resolvidos, anotações e outros recursos para ajudar nos estudos de novos alunos.

## Mas afinal, o que são Funções?
Funções são blocos de códigos que executam tarefas específicas. Seu uso melhora a organização do código, possibilita a sua reutilização e evita a repetição do código.

## Qual a estrutura de uma função?
Uma função possui três partes:
- Protótipo: a função é declarada antes de ser utilizada;
- Chamada: a função é chamada para atuar dentro da função `main`;
- Definição: implementação completa da função;

## Sintaxe de uma função
Esta é a sintaxe base para declarar uma função em C:
```c
tipo_de_retorno nomeDaFuncao (lista_de_parâmetros);
```
Essa estrutura é utilizada para declarar qualquer função em C. Como por exemplo, digamos que eu gostaria de declarar uma função que imprime o nome 'Corinthians' na tela, eu poderia prototipá-la dessa forma:

```c
void imprimirCorinthians();
```

## Funções com e sem retorno
A função com retorno sempre retorna um valor, enquanto uma função sem retorno apenas executa uma tarefa. Como exemplo, a função `soma` faz a soma de dois números inteiros e traz como retorno o resultado dessa operação.
```c
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(3, 5);
    printf("Resultado: %d", resultado);
    return 0;
}
```

Enquanto isso, uma função sem retorno realiza determinados comandos, sem necessariamente retornar um valor. Ela possui a seguinte forma:

```c
#include <stdio.h>

void mensagem() {
    printf("Olá, mundo!\n");
}

int main() {
    mensagem();
    return 0;
}
```

### 📌 Estrutura da Pasta
📂 Apostilas e Resumos

📄 resumo_cap1.pdf – Resumo do Capítulo 1

📄 resumo_cap2.pdf – Resumo do Capítulo 2

📂 Listas de Exercícios

📝 lista1.pdf – Exercícios sobre [Tópico X]

📝 lista2_solucoes.pdf – Exercícios resolvidos sobre [Tópico Y]

📂 Slides e Aulas

🎞️ aula1.pdf – Introdução à disciplina

🎞️ aula2.pdf – [Nome do tema abordado]

📂 Códigos e Scripts (se aplicável)

📜 codigo_exemplo.py – Código para [Finalidade]

## 🚀 Como Utilizar?
Baixe os arquivos que precisar.

Siga a ordem recomendada para facilitar a compreensão do conteúdo.

Se houver códigos, verifique se você precisa de alguma biblioteca específica antes de rodá-los.

## 🤝 Contribuindo
Se quiser adicionar materiais ou corrigir algo, fique à vontade para contribuir! Sugestões e melhorias são sempre bem-vindas.

## 📬 Contato
Caso tenha dúvidas ou queira trocar ideias sobre a disciplina, entre em contato pelo e-mail itallodemesquita@outlook.com ou via LinkedIn.