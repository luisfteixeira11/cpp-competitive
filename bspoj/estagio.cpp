#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;

int main()
{
  int maiormedia=-1, n;
  int turma=1;
  scanf("%d", &n);
  int codigo[1001], media[1001], aluno, nota;
  // le numero de alunos da primeira turma
  while (n!=0)
    { 
      // le dados dos alunos
      printf("Turma %d\n", turma);
      for (int i = 0; i < n; i++){
         scanf("%d %d", &aluno, &nota);
         if (nota>maiormedia){
            maiormedia = nota;
         }
         codigo [i] = aluno;
         media [i] = nota;
      }
      // procura aluno de maiores medias e printa
      for (int i = 0; i < n; i++){
         if (media[i] == maiormedia){
            printf("%d ", codigo[i]);
         }
      }
      
      printf("\n\n");
      // le numero de alunos da proxima turma
      scanf("%d", &n);
      turma++;
      maiormedia = -1;
    }
  return 0;
}