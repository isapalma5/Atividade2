//Isabella Castilho Palma
#include <stdio.h>
float mediaTurma(float mediaT[5]){
    float soma;
    float media;
    int i;
    for(i=0; i<5; i++){
        soma += mediaT[i];
    }
    media = soma/5;
        return media;
}
    float mediaEscola(float mediaE[6]){
        float soma1;
        float media1;
        int i;
    for(i=0; i<6; i++){
        soma1 += mediaE[i];
    }
     media1 = soma1/6;
        return media1;
}
int main()
{
float mediaFinalTurma, mediaT[5];
float mediaFinalEscola, mediaE[6];
int i;
for(i=0; i<5;i++ ){
    printf("Media do aluno %d: ", i+1);
    scanf("%f", &mediaT[i]);
}
mediaFinalTurma = mediaTurma(mediaT);
printf("Media da turma:%.2f\n", mediaFinalTurma);


for(i=0; i<6;i++ ){
    printf("Media da turma %d: ", i+1);
    scanf("%f", &mediaE[i]);
}
mediaFinalEscola = mediaEscola(mediaE);
printf("Media da escola:%.2f", mediaFinalEscola);


    return 0;
}