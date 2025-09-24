#include<stdio.h>
void testcroisaant(int *tab,int taille){
    int i;
for(i=0; i<taille-1; i++){
    if(tab[i]>tab[i+1]){
        printf("mal trie");
        return;
    }
}
printf("trie");

}
void testdecroissant(int *tab, int taille){
int i;
for(i=0; i<taille-1; i++){
    if(tab[i+1]>tab[i]){
        printf("mal trie");
        return;
    }
}
printf("trie");


}





int main(){
    int taille;
    int tab[100];
    int choix;
printf("entre la taille du tableau:");
scanf("%d",&taille);
printf("entre le tableau a trie:");
for(int i=0; i<taille; i++){
scanf("%d",&tab[i]);
}
printf("entre votre choix\n");
printf("1-test de trie croissant\n 2-test de trie decroissant");
scanf("%d",&choix);
switch(choix){
case 1:testcroisaant(tab,taille); break;
case 2: testdecroissant(tab,taille); break;
}
return 0;
}
