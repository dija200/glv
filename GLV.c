#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2000
#define max 300
typedef struct car{
int idcar;
char marque[15];
char nomcar[15];
char couleur[7];
int nbplace;
int prixJour;
char EnLocation[4];
}car;
typedef struct date{
int jj;
int mm;
int aaaa;
}date;
typedef struct contraLocation{
int numContrat;
int idCar;
int idClient;
date debut;
date fin;
int cout;}contrat;
typedef struct CIN{
char letter [2];
int nb;}CIN;
typedef struct Client{
int idClient;
char nom[20];
char prenom[20];
CIN cin;
char adresse[15];
int telephone;
} Client;
int Menuprincipale(){
    int choix;



    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");

    printf("\n                               \xb3 Menu Principal  \xb3");

    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");



    printf("\n\n");

     printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");

    printf("\n               \xba                                              \xba");

    printf("\n               \xba    Location******************************1   \xba");

    printf("\n               \xba    Gestion voitures**********************2   \xba");

    printf("\n               \xba    Gestion clients***********************3   \xba");

    printf("\n               \xba    Quitter*******************************4   \xba");

    printf("\n               \xba                                              \xba");

    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

    printf("\n  taper votre choix: ");
    scanf("%d",&choix);
    return choix;
}
int MenuGestiondesvoitures(){
    int choix1;


    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");

    printf("\n                               \xb3Gestion des voitures\xb3");

    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");



    printf("\n\n");



    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");

    printf("\n               \xba                                               \xba");

    printf("\n               \xba    Liste des voitures****************1        \xba");

    printf("\n               \xba    Ajouter voiture*******************2        \xba");

    printf("\n               \xba    Modifier voiture******************3        \xba");

    printf("\n               \xba    Supprimer voiture ****************4        \xba");

    printf("\n               \xba    Retour****************************5        \xba");

    printf("\n               \xba                                               \xba");

    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

    printf("\n\n                               Taper  Votre choix  :  ");
    scanf("%d",&choix1);
    return choix1;
}
int MenuLocationdesvoitures(){
    int choix2;

    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");

    printf("\n                               \xb3 Location d'une voiture \xb3");

    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");



    printf("\n\n");



    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");

    printf("\n               \xba                                              \xba");

    printf("\n               \xba    Visualiser contrat***************1        \xba");

    printf("\n               \xba    Louer voiture********************2        \xba");

    printf("\n               \xba    Retourner voiture****************3        \xba");

    printf("\n               \xba    Modifier contrat ****************4        \xba");

    printf("\n               \xba    Retour***************************5        \xba");

    printf("\n               \xba                                              \xba");

    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

    printf("\n\n                                Tapez Votre choix  :  ");

    scanf("%d",&choix2);
    return choix2;}
int MenuGestionclients(){
 int choix3;
   printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");

    printf("\n                               \xb3  Gestion des Clients \xb3");

    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");



    printf("\n\n");



    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");

    printf("\n               \xba                                              \xba");

    printf("\n               \xba    Liste des clients********************1    \xba");

    printf("\n               \xba    Ajouter client***********************2    \xba");

    printf("\n               \xba    Modifier client**********************3    \xba");

    printf("\n               \xba    Supprimer client*********************4    \xba");

    printf("\n               \xba    Retour*******************************5    \xba");

    printf("\n               \xba                                              \xba");

    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

    printf("\n\n                              Tapez Votre choix  :  ");




    scanf("%d",&choix3);
    return choix3;}
int liste2car(){
FILE* fichier=NULL;
char ch[MAX]="";
fichier=fopen("car.txt","r");
if(fichier!=NULL)
{
    if(fgets(ch,MAX,fichier)==NULL)
    {
        printf("On n'a  pas des voitures louee \n");}
        printf("\n les informations des voitures est de format \n");
        printf("identificateur de voiture|la marque|le nom|la couleur du voiture|nombres des places|le prix par jour \n");
        while (fgets(ch,MAX,fichier)!=NULL)
        {
            printf("%s",ch);
        }
        fclose(fichier);

}
else{
    printf("\n le fichier n'existait pas \n");
    return 0;
}
return 1;//si le programme est bien executé
}
int AjouterVoiture(){

     FILE* fichier=NULL;

     car V;



            printf("donner les informations conçernants la voiture que voulez ajouter :\n");

            printf("\n saisir votre  idvoiture  svp : ");

            scanf("%d",&V.idcar);

            printf("\n  saisir votre marque  svp: ");

            scanf("%s",V.marque);

            printf("\n saisir votre nom  de voiture svp : ");

            scanf("%s",V.nomcar);

            printf("\n saisir la couleur : ");

            scanf("%s",V.couleur);

            printf("\n nbr de places  : ");

            scanf("%d",&V.nbplace);

            printf("\n prix par jour(MAD) : ");

            scanf("%d",&V.prixJour);

            printf("\n la voiture en location (oui|non)");
             scanf ("%s",V.EnLocation);

    //aprés avoir remplir tous les champs on ouvre le fichier Voiture en mode ajout

     fichier=fopen("car.txt", "a");

     if(fichier)

     {

        fprintf(fichier,"%d %s %s %s %d %d %s \n",V.idcar,V.marque,V.nomcar,V.couleur,V.nbplace,V.prixJour,V.EnLocation);

        fclose(fichier);

     }

    else return 0;// au cas où  l'ouverture est echouée



 return 1;

}
int Modifier(){

	FILE* fichier;
    car v;
	char chaine[max]="";
	int idv;
	fichier = fopen("car.txt","r");
	while(fgets(chaine,max,fichier) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(fichier);
		printf("\n entrer l'id de voiture que vous avez dans votre fichier : ");
		scanf("%d",&idv);
			fichier = fopen("car.txt","r");
			fgets(chaine,max,fichier);
			printf("\n %s",chaine);
			fclose(fichier);
			printf("\n Ree-saisir les information et changer ce que vous voullez \n");
			printf("\t l'id voiture : ");
					scanf("%d",&v.idcar);
				printf("\t marque  : ");
				     scanf("%s",v.marque);
				printf("\t Nom  : ");
				     scanf("%s",v.nomcar);
				printf("\t couleur  : ");
                     scanf("%s",v.couleur);
				printf("\t nombre de place  : ");
				     scanf("%d",&v.nbplace);
				printf("\t prix par jour  : ");
				     scanf("%d",&v.prixJour);
                printf("\n la voiture en location (oui|non)");
                     scanf ("%s",v.EnLocation);

            fichier = fopen("voiture.txt","a+");
				{
				    fprintf(fichier,"%d%s%s%s%d%d%s",v.idcar,v.marque,v.nomcar,v.couleur,v.nbplace,v.nbplace,v.prixJour,v.EnLocation);
					fclose(fichier);
				}
		remove("car.txt");
		rename("voiture.txt","car.txt");
		printf("\n\n  la modification est effectue avec succes\n\n");
		return 1;
	}
void supprimer(){
	FILE* fichier;
	car v;
	char chaine[max]="";
int idanc,idnew;

	printf("\n donner l'id de la voiture que vous voullez supprimer : ");
	scanf("%d",&idnew);
	printf("\n entrer l'id de voiture que vous avez deja dans votre fichier : ");
	scanf("%d",&idanc);
		fichier = fopen("car.txt","r");
		fgets(chaine,max,fichier);
		printf("\n %s",chaine);
		fclose(fichier);
			fichier = fopen("voiture.txt","a+");
				fprintf(fichier,"%s",chaine);
				fclose(fichier);
	remove("car.txt");
	rename("voiture.txt","car.txt");
	printf("\n la suppression est effectue avec succes\n\n");
}
void Retour(){
printf("Retour au menu principale",Menuprincipale());
}
// gestion des clients
int liste2client(){
FILE* fic=NULL;
char chcl[MAX]="";
 fic=fopen("client.txt","r");
if(fic!=NULL)
{
     printf("les information du clients sont sous forme (id de Client| nom |prenom | cin | adresse | telephone)\n");
       while(fgets(chcl,MAX,fic)!=NULL)
          {
              printf("%s",chcl);
          }
}
else
return 0;
 return 1;
}
int AjouterClient(){

     FILE* fic =NULL;

     Client Cl;
  printf(" saisir l'identificateur du client : ");
            scanf("%d",&Cl.idClient);
            printf("saisir le nom du client : ");
            scanf("%s",Cl.nom);
            printf("saisir le prenom du client : ");
            scanf("%s",Cl.prenom);
            printf("donner le CIN \n(exemple : YZ 0000000)");
            scanf("%s %d",Cl.cin.letter,&Cl.cin.nb);
            printf("donner l'adresse du client : ");
            scanf("%s",Cl.adresse);
            printf("saisir le numéro du  telephone: ");
            scanf("%d",&Cl.telephone);
     fic=fopen("client.txt","a");

     if(fic==NULL){
    	printf("l'ouverture echouee'");
    	return 0;
	}


       fprintf(fic,"%d %s %s %s%d %s %d\n",Cl.idClient,Cl.nom,Cl.prenom,Cl.cin.letter,Cl.cin.nb,Cl.adresse,Cl.telephone);

       fclose(fic);


return 1;
}
void ModifierClient(){
	FILE* fic;
	Client cl;
	char ch[max]="";
	int id;

	printf("\n affichage de  liste des clients \n");

	fic = fopen("client.txt","r");
	while(fgets(ch,max,fic) != NULL)
 	{
 		printf("%s \n",ch);
	}
	fclose(fic);

		printf("\n entrer l'id de client que vous avez deja dans votre fichier : ");
		scanf("%d",&id);

			fic = fopen("client.txt","r");
			fgets(ch,max,fic);
			printf("\n %s",ch);
			fclose(fic);
            printf("\n Resaisir les information de client \n");

					printf("\t l'id du client : ");
					scanf("%d",&cl.idClient);

				printf("\t Nom : ");
				scanf("%s",cl.nom);
				printf("\t Prenom  : ");
				scanf("%s",cl.prenom);
					printf("\t CIN  de format YZ00000: ");
		    		scanf("%s%d",cl.cin.letter,&cl.cin.nb);
				printf("\t l'adresse  : ");
				scanf("%s",cl.adresse);
					printf("\t numero de telephone  : ");
					scanf("%d",&cl.telephone);
				fic = fopen("c.txt","a+");
				{
					fprintf(fic,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d\n",cl.idClient,cl.nom,cl.prenom,cl.cin.letter,&cl.cin.nb,cl.adresse,cl.telephone);
					fclose(fic);
				}

		remove("client.txt");
		rename("c.txt","client.txt");

		printf("\n\n la modification de client est effectue avec succes\n\n");
	}
void SupprimerClient(){
	FILE* fic;
        Client CL;
	char ch[max]="";
	int idanc;
	printf("\n\n entrer l'id de client que vous avez deja dans votre fichier : ");
	scanf("%d",&idanc);
		fic = fopen("client.txt","r");
		fgets(ch,max,fic);
		printf("\n %s",ch);
		fclose(fic);

			fic = fopen("c.txt","a+");
			{
				fprintf(fic,"%s",ch);
				fclose(fic);
			}


	remove("clients.txt");
	rename("cli.txt","clients.txt");

	printf("la suppression de client est effectue avec succes\n");
}
//Gestion de contrat
int visualisercontrat(){
int NC;
float n;
FILE*fich=NULL;
char chaine[max]="";
contrat ct;
fich=fopen("contrat.txt","r");

    printf("\n--------liste des contrat--------- \n");
while(fgets(chaine,max,fich)!=NULL){
    printf("%s \n",chaine);
} fclose(fich);
fich=fopen("contrat.txt","r");
if(fich==NULL){
    printf("\n  pas de contrat ");
}
if(fich!=NULL){
    do
    {
        printf("entrer svp le numero de contrat que tu peux visualiser :");
    scanf("%d",NC);
    }while(n<=1 || n>99);
		fich = fopen("contrat.txt","r");
 		fseek(fich,(n-1)*89,SEEK_SET);
		fgets(chaine,max,fich);
		printf("%s",chaine);

		fclose(fich);
		}
		fclose(fich);

}
contrat lireContrat(){
    contrat c;
    printf("\n   Remplire information de votre contrat ");

    printf("\tNumero :");
    scanf("%f",&c.numContrat);
    printf("\tID_V :");
    scanf("%d",&c.idCar);
    printf("\tID Client :");
    scanf("%d",&c.idClient);
    printf("\tDate debut :\n");
   scanf("%d%d%d",&c.debut.jj,&c.debut.mm,&c.debut.aaaa);
    printf("\tDate fin :\n");
    scanf("%d%d%d",&c.fin.jj,&c.fin.mm,&c.fin.aaaa);
    printf("\tCOUT :");
    scanf("%d",&c.cout);


    return c;

}
int ajouterContrat(){
    contrat c;
    FILE* out;
    char buffer_out[256];

    out=fopen("Contrat.txt","a");
    if( out==NULL ) return -1;

    int bytes_wrote=fprintf(out,c.numContrat,c.idCar,c.idClient,c.debut.jj,c.debut.mm,c.debut.aaaa,c.fin.jj,c.fin.mm,c.fin.aaaa,c.cout);
    fclose(out);
    if(bytes_wrote<=0) return -2;


    return 0;
}
int listeDesContrat(){
    FILE* in;
    contrat c;
    char buffer_in[256];

    in=fopen("Contrat.txt","r");
    if( in==NULL ) return -1;

    while(! feof(in)){
        int bytes_read=fscanf(in,&c.numContrat,&c.idCar,&c.idClient,&c.debut.jj,&c.debut.mm,&c.debut.aaaa,&c.fin.jj,&c.fin.mm,&c.fin.aaaa,&c.cout);
        if(bytes_read<=0) return -2;
        printf(in,c.numContrat,c.idCar,c.idClient,c.debut.jj,c.debut.mm,c.debut.aaaa,c.fin.jj,c.fin.mm,c.fin.aaaa,c.cout);
    }
    fclose(in);
    getchar();

}
void louerVoiture(){
lireContrat();
ajouterContrat();
listeDesContrat();
}
void RetournerVoiture(){
 	FILE *fich;
 	FILE *contrat;
 	car v;
 	char chaine[max]="";
 	int nb,id,numco;

 	printf("Retourner voiture");

    printf("\n donner l'id de la voiture a Retourner : ");
 	scanf("%d",&id);

 	printf("\nla liste des voitures\n");

	fich = fopen("car.txt","r");
	while(fgets(chaine,max,fich) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(fich);

	if(&id)
	{
		printf("\n donner le numero de ligne de voiture a Retourner : ");
   		scanf("%d",&nb);


			fich = fopen("car.txt","r");
			fgets(chaine,max,fich);
			printf("\n %s",chaine);
			fclose(fich);



 				printf("\n Resaisir les informations du voiture en changeons la location de oui a non : \n");
 					printf("\t l'id du voiture : ");
 					scanf("%d",&v.idcar);
			 	printf("\t la marque  : ");
 				scanf("%s",v.marque);
 				printf("\t le nom de la voiture  : ");
 				scanf("%s",v.nomcar);
 				printf("\t couleur  : ");
 				scanf("%s",v.couleur);
 			    printf("\t nombre de place : ");
 				scanf("%d",&v.nbplace);
				printf("\t le prix d'un jour : ");
 				scanf("%d",&v.prixJour);
				 printf("\t est-il en location (veuillez ecrivez non) : ");
 				 scanf("%s",v.EnLocation);
 				fich = fopen("voiture.txt","a+");
 				{
 					fprintf(fich,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idcar,v.marque,v.nomcar,v.couleur,v.nbplace,v.prixJour,v.EnLocation);
					fclose(fich);
				}


				printf("\n lorsque tu retourner cette voiture tu peut maintenant supprimer le contrat \n");

				printf("\n suppression de contrat\n");

				printf("\n entrer le numero de contrat que vous avez deja dans votre fichier : ");
				scanf("%d",&numco);


					contrat = fopen("contrat.txt","r");
					fgets(chaine,max,contrat);
					printf("%s",chaine);
					fclose(contrat);
                }


						contrat = fopen("cont.txt","a+");
						{
							fprintf(contrat,"%s",chaine);
							fclose(contrat);
						}

				remove("contrat.txt");
				rename("cont.txt","contrat.txt");

				fich = fopen("voiture.txt","a+");
				{
					fprintf(fich,"%s",chaine);
					fclose(fich);
				}



		remove("car.txt");
		rename("voiture.txt","car.txt");



	printf("\nvous avez retourner cette voiture avec sucsee\n");


}
int ModifierContrat(){
 int x,c;
 contrat C;
    car v;
    FILE *fich;
    	char chaine[max]="";
    int Nc;
   printf("donnez le nombre de contrat que vous avez deja enregistrer :");
scanf("%d",Nc);

			fich = fopen("contrat.txt","r");
			fgets(chaine,max,fich);
			printf("\n %s",chaine);
			fclose(fich);

			do
			{
				printf("\n tu peux modifier votre choix  : ");
				scanf("%d",&x);
			}while(x != 1 && x != 0);
			if(x == 1)
			{
			    printf("donner le num de contrat ");
			    scanf("%d",&C.numContrat);

printf("donner le id du client");
scanf("%d",&C.idClient);
printf("donner le id du voiture");
scanf("%d",&C.idCar);
printf("donner le cout");
scanf("%d",&C.cout);
printf(" le Jour : ");
scanf("%d",&C.debut.jj);
printf("le Mois : ");
scanf("%d",&C.debut.mm);
printf(" annee : ");
scanf("%d",&C.debut.aaaa);
printf("la fin de jour  : ");
scanf("%d",&C.fin.jj);
printf("le mois : ");
scanf("%d",&C.fin.mm);
printf(" annee : ");
scanf("%d",&C.fin.aaaa);
fich = fopen("contrat.txt","a+");
				{
				    fprintf(fich,"num:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d\n",C.numContrat,C.idCar,C.idClient,C.cout,C.debut.jj,C.debut.mm,C.debut.aaaa,C.fin.jj,C.fin.mm,C.fin.aaaa);
				fclose(fich);
				}
			}
				else
		    {
			fich = fopen("c.txt","a+");
			{
				fprintf(fich,"%s",chaine);
				fclose(fich);
			}
        }

    remove("contrat.txt");
	rename("c.txt","contrat.txt");
	}
int main(){
    system("color F3");
  do

   {

        switch(Menuprincipale())

        {

             case 1:do{

                        switch(MenuLocationdesvoitures())

                        {

                             case 1:visualisercontrat();

                                    break;

                             case 2:louerVoiture();

                                    break;

                             case 3:RetournerVoiture();

                                     break;

                             case 4:ModifierContrat();

                                    break;


                             case 5:Menuprincipale();



                        }

                    }while((MenuLocationdesvoitures())!=5);

            break;

                 case 2:do{

                          switch(MenuGestiondesvoitures())

                            {

                                 case 1:{

                                        liste2car();

                                        break;

                                        }

                                 case 2:{

                                        AjouterVoiture();

                                        break;

                                        }

                                 case 3:{

                                        Modifier();

                                        break;

                                        }

                                 case 4:{

                                        supprimer();

                                        break;

                                        }

                                 case 5:Retour();

                            }



                          }while(MenuGestiondesvoitures()!=5);

                break;



                case 3:do{

                        switch(MenuGestionclients())

                           {

                                   case 1:liste2client();

                                         break;

                                   case 2:AjouterClient();

                                         break;

                                   case 3:ModifierClient();

                                         break;

                                   case 4:SupprimerClient();

                                         break;

                                   case 5:Menuprincipale();

                                        break;

                           }



                        }while((MenuGestionclients())!=5);

                break;

            case 4:exit(1);

        }



   }while((Menuprincipale())!=4);
}
