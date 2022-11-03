

int main()
{
  float nota[10][3];
  for(int i = 0; i < 10; i++){
    printf("Digite para aluno  %d, digite as 3 notas : ", i+1);
    for(int j = 0; j < 3; j++)
      scanf("%f", &nota[i][j]);
  }
  float melhorNota[10], maiorNota = 0, contadorMelhorNota;
  for(int i = 0; i < 10; i++){
    melhorNota[i] = 0;
    int notaAtual = 0;
    for(int j = 0; j < 3; j++){
      if(notaAtual < nota[i][j]){
        melhorNota[i] = j+1;
        notaAtual = nota[i][j];
      }
    }
    if(maiorNota < notaAtual){
      contadorMelhorNota = 0;
      maiorNota = notaAtual;
    }
    if(notaAtual == maiorNota)
      contadorMelhorNota++;
  }
  for(int i = 0; i < 3; i++){
    int soma = 0;
    for(int j = 0; j < 10; j++){
      if(melhorNota[j] == i+1)
        soma++;
    }
    printf("%d alunos tiraram a melhor nota %d!\n", soma, i+1);
  }
  printf("A melhor nota foi %.2f, %.0f alunos obtiveram essa nota!\n", maiorNota, contadorMelhorNota);
  return 0;
}

