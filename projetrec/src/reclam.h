#include <gtk/gtk.h>
typedef struct{
	int jour;
	int mois;
	int annee;
}Date;
typedef struct{
	char id[20];
	char cin[20];
	char nom[20];
	char prenom[20];
	int type;
	char text_reclamation[50];
	Date d;
	int satisfaction;
	int education;
	
}reclamation;
void ajouter_reclam(reclamation r);
void supprimer_reclam(char id[20]);
void modifier_reclam(reclamation r);
void afficher_reclam(GtkWidget *liste,char file[20]);
void recherche_reclam(char cin[20]);
int serviceleplusreclame();
int existe(char id[20]);
