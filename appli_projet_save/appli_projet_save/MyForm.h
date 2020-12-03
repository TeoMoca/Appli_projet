#pragma once
#include "pch.h"
ref class stratClient;


namespace appliprojet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		
		
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
		




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AjouterunclientToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ actualiserUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lireLesDonneesClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettreaJourLesDonneesDunPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lireLesDonneesDunPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ commandesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ passerUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettreaJourUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visualiserUneCommandeToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettreaJourUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visualiserLesDonneesDunArticleToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ accueilToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ boxCRclient;
	private: System::Windows::Forms::Label^ createclientadrlivL;

	private: System::Windows::Forms::Label^ createclientadrfacL;

	private: System::Windows::Forms::Label^ createclientbirthL;

	private: System::Windows::Forms::Label^ createclientnomL;
	private: System::Windows::Forms::Label^ createclientprenomL;




	private: System::Windows::Forms::TextBox^ NomClient;
	private: System::Windows::Forms::TextBox^ AnnivClient;
	private: System::Windows::Forms::TextBox^ PrenomClient;
	private: System::Windows::Forms::Label^ informationadresse;
	private: System::Windows::Forms::Button^ savecreateclientB;
	private: System::Windows::Forms::DataGridView^ dataview;
	private: System::Windows::Forms::GroupBox^ boxCRpersonnel;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CreatePersonnelButton;
	private: System::Windows::Forms::GroupBox^ BoxCRcommande;
	private: System::Windows::Forms::GroupBox^ BoxDEpersonnel;


	private: System::Windows::Forms::GroupBox^ BoxDEcommande;
	private: System::Windows::Forms::GroupBox^ BoxDEstock;


	private: System::Windows::Forms::GroupBox^ BoxCRstock;
	private: System::Windows::Forms::GroupBox^ BoxREpersonnel;


	private: System::Windows::Forms::GroupBox^ BoxREstock;
	private: System::Windows::Forms::GroupBox^ BoxREclient;


	private: System::Windows::Forms::GroupBox^ BoxUPstock;

	private: System::Windows::Forms::GroupBox^ BoxREcommande;

	private: System::Windows::Forms::GroupBox^ BoxUPcommande;
	private: System::Windows::Forms::GroupBox^ BoxUPclient;
private: System::Windows::Forms::GroupBox^ BoxDEclient;
private: System::Windows::Forms::GroupBox^ BoxUPpersonnel;
private: System::Windows::Forms::Button^ voirclientRead;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;

private: System::Windows::Forms::TextBox^ NomClient4;
private: System::Windows::Forms::TextBox^ PrenomClient4;
private: System::Windows::Forms::Button^ ReadPersonnelButton;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ RechercheArticleButton;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ CouleurArticleCR;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ NatureArticleCR;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ CRarticleButton;
private: System::Windows::Forms::Label^ selectedonglet;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ DeletePersonnelButton;
private: System::Windows::Forms::DataGridView^ dataviewUPclient;
private: System::Windows::Forms::GroupBox^ Rechercheclient;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ UpdateclientButton;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ PrenomClient2;
private: System::Windows::Forms::TextBox^ NomClient2;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ voirclientUpdate;
private: System::Windows::Forms::TextBox^ AnnivClient2;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ PrenomClient3;
private: System::Windows::Forms::TextBox^ NomClient3;







	private: System::ComponentModel::IContainer^ components;




private: System::Windows::Forms::TextBox^ CP_fact_Client;
private: System::Windows::Forms::TextBox^ VILLE_fact_Client;
private: System::Windows::Forms::TextBox^ NUMRUE_fact_Client;



private: System::Windows::Forms::TextBox^ CP_livr_Client;
private: System::Windows::Forms::TextBox^ Ville_livr_Client;
private: System::Windows::Forms::TextBox^ NUMRUE_livr_Client;
private: System::Windows::Forms::Button^ ajoutAdresseFact;
private: System::Windows::Forms::Button^ ajoutAdresseLivr;
private: System::Windows::Forms::TextBox^ CPClient2;
private: System::Windows::Forms::TextBox^ CPClient;
private: System::Windows::Forms::TextBox^ VILLEClient2;
private: System::Windows::Forms::TextBox^ VILLEClient;
private: System::Windows::Forms::TextBox^ NUMRUEClient2;
private: System::Windows::Forms::TextBox^ NUMRUEClient;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox46;
private: System::Windows::Forms::TextBox^ textBox45;












	protected:













	protected:

	private:
		stratClient^ obj = gcnew stratClient;
		stratPersonnel^ objp = gcnew stratPersonnel;
		stratStock^ objs = gcnew stratStock;
		int id;
		String^ nom;
		String^ prenom;
		int idadresse;
		String^ NUMRUE;
		String^ ville;
		String^ CP;
		String^ idsup;
		String^ nature;
		String^ couleur;
		int idcouleur;
		int idnature;
		String^ desi;
		String^ quant;
		String^ seuil;
		String^ prixach, ^ ht;
		int tva;
		String^ idarticle;
		String^ anniv;



private: System::Windows::Forms::TextBox^ TVAArticle;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ PrixHTArticle;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ PrixAchatArticle;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ SeuilArticle;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ QuantiteArticle;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::GroupBox^ BOXupS;
private: System::Windows::Forms::TextBox^ DesignationArticle;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ ArticleButtonUpdate;
		

private: System::Windows::Forms::DataGridView^ dataviewUpstock;
private: System::Windows::Forms::TextBox^ textBox53;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ RechercheArticleButton_4_Update;
	   

private: System::Windows::Forms::DataGridView^ dataviewREclient;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::DataGridView^ dataviewnature;
private: System::Windows::Forms::DataGridView^ dataviewcouleur;
private: System::Windows::Forms::Button^ supprpersonnelButton;
private: System::Windows::Forms::DataGridView^ dataviewdepersonnel;
private: System::Windows::Forms::TextBox^ IDSUP_Personnel;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::GroupBox^ Bupdatepersonnel;
private: System::Windows::Forms::TextBox^ CPPersonnel;
private: System::Windows::Forms::TextBox^ VillePersonnel;
private: System::Windows::Forms::TextBox^ NUMRUEPersonnel;
private: System::Windows::Forms::TextBox^ PrenomPersonnel;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ NomPersonnel;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ UpdatePersonnelButton;
private: System::Windows::Forms::Button^ validcommandB;

private: System::Windows::Forms::Button^ TransitionClientCommande;
	   
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accueilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AjouterunclientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualiserUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lireLesDonneesClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lireLesDonneesDunPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->passerUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettreaJourUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualiserUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettreaJourUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualiserLesDonneesDunArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boxCRclient = (gcnew System::Windows::Forms::GroupBox());
			this->CP_livr_Client = (gcnew System::Windows::Forms::TextBox());
			this->Ville_livr_Client = (gcnew System::Windows::Forms::TextBox());
			this->NUMRUE_livr_Client = (gcnew System::Windows::Forms::TextBox());
			this->CP_fact_Client = (gcnew System::Windows::Forms::TextBox());
			this->VILLE_fact_Client = (gcnew System::Windows::Forms::TextBox());
			this->NUMRUE_fact_Client = (gcnew System::Windows::Forms::TextBox());
			this->savecreateclientB = (gcnew System::Windows::Forms::Button());
			this->informationadresse = (gcnew System::Windows::Forms::Label());
			this->NomClient = (gcnew System::Windows::Forms::TextBox());
			this->AnnivClient = (gcnew System::Windows::Forms::TextBox());
			this->PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->createclientadrlivL = (gcnew System::Windows::Forms::Label());
			this->createclientadrfacL = (gcnew System::Windows::Forms::Label());
			this->createclientbirthL = (gcnew System::Windows::Forms::Label());
			this->createclientnomL = (gcnew System::Windows::Forms::Label());
			this->createclientprenomL = (gcnew System::Windows::Forms::Label());
			this->dataview = (gcnew System::Windows::Forms::DataGridView());
			this->boxCRpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->CreatePersonnelButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->BoxCRcommande = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->validcommandB = (gcnew System::Windows::Forms::Button());
			this->BoxDEpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->DeletePersonnelButton = (gcnew System::Windows::Forms::Button());
			this->BoxDEcommande = (gcnew System::Windows::Forms::GroupBox());
			this->BoxDEstock = (gcnew System::Windows::Forms::GroupBox());
			this->BoxCRstock = (gcnew System::Windows::Forms::GroupBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->CouleurArticleCR = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->NatureArticleCR = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->CRarticleButton = (gcnew System::Windows::Forms::Button());
			this->BoxREpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->ReadPersonnelButton = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->BoxREstock = (gcnew System::Windows::Forms::GroupBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->RechercheArticleButton = (gcnew System::Windows::Forms::Button());
			this->BoxREclient = (gcnew System::Windows::Forms::GroupBox());
			this->voirclientRead = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NomClient3 = (gcnew System::Windows::Forms::TextBox());
			this->PrenomClient3 = (gcnew System::Windows::Forms::TextBox());
			this->BoxUPstock = (gcnew System::Windows::Forms::GroupBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->RechercheArticleButton_4_Update = (gcnew System::Windows::Forms::Button());
			this->BoxREcommande = (gcnew System::Windows::Forms::GroupBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->BoxUPcommande = (gcnew System::Windows::Forms::GroupBox());
			this->BoxUPclient = (gcnew System::Windows::Forms::GroupBox());
			this->PrenomClient4 = (gcnew System::Windows::Forms::TextBox());
			this->NomClient4 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->voirclientUpdate = (gcnew System::Windows::Forms::Button());
			this->Rechercheclient = (gcnew System::Windows::Forms::GroupBox());
			this->AnnivClient2 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->PrenomClient2 = (gcnew System::Windows::Forms::TextBox());
			this->NomClient2 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->UpdateclientButton = (gcnew System::Windows::Forms::Button());
			this->ajoutAdresseFact = (gcnew System::Windows::Forms::Button());
			this->ajoutAdresseLivr = (gcnew System::Windows::Forms::Button());
			this->CPClient2 = (gcnew System::Windows::Forms::TextBox());
			this->CPClient = (gcnew System::Windows::Forms::TextBox());
			this->VILLEClient2 = (gcnew System::Windows::Forms::TextBox());
			this->VILLEClient = (gcnew System::Windows::Forms::TextBox());
			this->NUMRUEClient2 = (gcnew System::Windows::Forms::TextBox());
			this->NUMRUEClient = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->BoxDEclient = (gcnew System::Windows::Forms::GroupBox());
			this->BoxUPpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->selectedonglet = (gcnew System::Windows::Forms::Label());
			this->dataviewUPclient = (gcnew System::Windows::Forms::DataGridView());
			this->dataviewREclient = (gcnew System::Windows::Forms::DataGridView());
			this->TransitionClientCommande = (gcnew System::Windows::Forms::Button());
			this->Bupdatepersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->IDSUP_Personnel = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->CPPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->VillePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->NUMRUEPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->UpdatePersonnelButton = (gcnew System::Windows::Forms::Button());
			this->dataviewdepersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->supprpersonnelButton = (gcnew System::Windows::Forms::Button());
			this->dataviewnature = (gcnew System::Windows::Forms::DataGridView());
			this->dataviewcouleur = (gcnew System::Windows::Forms::DataGridView());
			this->dataviewUpstock = (gcnew System::Windows::Forms::DataGridView());
			this->BOXupS = (gcnew System::Windows::Forms::GroupBox());
			this->TVAArticle = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->PrixHTArticle = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->PrixAchatArticle = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->SeuilArticle = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->QuantiteArticle = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->DesignationArticle = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->ArticleButtonUpdate = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->boxCRclient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->BeginInit();
			this->boxCRpersonnel->SuspendLayout();
			this->BoxCRcommande->SuspendLayout();
			this->BoxDEpersonnel->SuspendLayout();
			this->BoxCRstock->SuspendLayout();
			this->BoxREpersonnel->SuspendLayout();
			this->BoxREstock->SuspendLayout();
			this->BoxREclient->SuspendLayout();
			this->BoxUPstock->SuspendLayout();
			this->BoxREcommande->SuspendLayout();
			this->BoxUPclient->SuspendLayout();
			this->Rechercheclient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewUPclient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewREclient))->BeginInit();
			this->Bupdatepersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewdepersonnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewnature))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewcouleur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewUpstock))->BeginInit();
			this->BOXupS->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->accueilToolStripMenuItem,
					this->clientsToolStripMenuItem, this->personnelToolStripMenuItem, this->commandesToolStripMenuItem, this->stockToolStripMenuItem,
					this->statistiquesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1195, 33);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accueilToolStripMenuItem
			// 
			this->accueilToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->accueilToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Gray;
			this->accueilToolStripMenuItem->Name = L"accueilToolStripMenuItem";
			this->accueilToolStripMenuItem->Size = System::Drawing::Size(88, 29);
			this->accueilToolStripMenuItem->Text = L"Accueil";
			this->accueilToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::accueilToolStripMenuItem_Click_1);
			// 
			// clientsToolStripMenuItem
			// 
			this->clientsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->AjouterunclientToolStripMenuItem,
					this->actualiserUnClientToolStripMenuItem, this->lireLesDonneesClientToolStripMenuItem
			});
			this->clientsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->clientsToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->clientsToolStripMenuItem->Name = L"clientsToolStripMenuItem";
			this->clientsToolStripMenuItem->Size = System::Drawing::Size(84, 29);
			this->clientsToolStripMenuItem->Text = L"Clients";
			// 
			// AjouterunclientToolStripMenuItem
			// 
			this->AjouterunclientToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->AjouterunclientToolStripMenuItem->Name = L"AjouterunclientToolStripMenuItem";
			this->AjouterunclientToolStripMenuItem->Size = System::Drawing::Size(368, 30);
			this->AjouterunclientToolStripMenuItem->Text = L"Ajouter un client";
			this->AjouterunclientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AjouterunclientToolStripMenuItem_Click);
			// 
			// actualiserUnClientToolStripMenuItem
			// 
			this->actualiserUnClientToolStripMenuItem->Name = L"actualiserUnClientToolStripMenuItem";
			this->actualiserUnClientToolStripMenuItem->Size = System::Drawing::Size(368, 30);
			this->actualiserUnClientToolStripMenuItem->Text = L"Mettre a jour les donnees client";
			this->actualiserUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::actualiserUnClientToolStripMenuItem_Click);
			// 
			// lireLesDonneesClientToolStripMenuItem
			// 
			this->lireLesDonneesClientToolStripMenuItem->Name = L"lireLesDonneesClientToolStripMenuItem";
			this->lireLesDonneesClientToolStripMenuItem->Size = System::Drawing::Size(368, 30);
			this->lireLesDonneesClientToolStripMenuItem->Text = L"Lire les donnees client";
			this->lireLesDonneesClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lireLesDonneesClientToolStripMenuItem_Click);
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ajouterUnPersonnelToolStripMenuItem,
					this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem, this->lireLesDonneesDunPersonnelToolStripMenuItem, this->supprimerUnPersonnelToolStripMenuItem
			});
			this->personnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(109, 29);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// ajouterUnPersonnelToolStripMenuItem
			// 
			this->ajouterUnPersonnelToolStripMenuItem->Name = L"ajouterUnPersonnelToolStripMenuItem";
			this->ajouterUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->ajouterUnPersonnelToolStripMenuItem->Text = L"Ajouter un personnel";
			this->ajouterUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ajouterUnPersonnelToolStripMenuItem_Click);
			// 
			// mettreaJourLesDonneesDunPersonnelToolStripMenuItem
			// 
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Name = L"mettreaJourLesDonneesDunPersonnelToolStripMenuItem";
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Text = L"Mettre a jour les donnees d\'un personnel";
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mettreaJourLesDonneesDunPersonnelToolStripMenuItem_Click);
			// 
			// lireLesDonneesDunPersonnelToolStripMenuItem
			// 
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Name = L"lireLesDonneesDunPersonnelToolStripMenuItem";
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Text = L"Lire les donnees d\'un personnel";
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lireLesDonneesDunPersonnelToolStripMenuItem_Click);
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			this->supprimerUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerUnPersonnelToolStripMenuItem_Click);
			// 
			// commandesToolStripMenuItem
			// 
			this->commandesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->passerUneCommandeToolStripMenuItem,
					this->mettreaJourUneCommandeToolStripMenuItem, this->visualiserUneCommandeToolStripMenuItem
			});
			this->commandesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->commandesToolStripMenuItem->Name = L"commandesToolStripMenuItem";
			this->commandesToolStripMenuItem->Size = System::Drawing::Size(133, 29);
			this->commandesToolStripMenuItem->Text = L"Commandes";
			// 
			// passerUneCommandeToolStripMenuItem
			// 
			this->passerUneCommandeToolStripMenuItem->Name = L"passerUneCommandeToolStripMenuItem";
			this->passerUneCommandeToolStripMenuItem->Size = System::Drawing::Size(349, 30);
			this->passerUneCommandeToolStripMenuItem->Text = L"Passer une commande";
			this->passerUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::passerUneCommandeToolStripMenuItem_Click);
			// 
			// mettreaJourUneCommandeToolStripMenuItem
			// 
			this->mettreaJourUneCommandeToolStripMenuItem->Name = L"mettreaJourUneCommandeToolStripMenuItem";
			this->mettreaJourUneCommandeToolStripMenuItem->Size = System::Drawing::Size(349, 30);
			this->mettreaJourUneCommandeToolStripMenuItem->Text = L"Mettre a jour une commande";
			this->mettreaJourUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mettreaJourUneCommandeToolStripMenuItem_Click);
			// 
			// visualiserUneCommandeToolStripMenuItem
			// 
			this->visualiserUneCommandeToolStripMenuItem->Name = L"visualiserUneCommandeToolStripMenuItem";
			this->visualiserUneCommandeToolStripMenuItem->Size = System::Drawing::Size(349, 30);
			this->visualiserUneCommandeToolStripMenuItem->Text = L"Visualiser une commande";
			this->visualiserUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualiserUneCommandeToolStripMenuItem_Click);
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterUnArticleToolStripMenuItem,
					this->mettreaJourUnArticleToolStripMenuItem, this->visualiserLesDonneesDunArticleToolStripMenuItem
			});
			this->stockToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(72, 29);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// ajouterUnArticleToolStripMenuItem
			// 
			this->ajouterUnArticleToolStripMenuItem->Name = L"ajouterUnArticleToolStripMenuItem";
			this->ajouterUnArticleToolStripMenuItem->Size = System::Drawing::Size(386, 30);
			this->ajouterUnArticleToolStripMenuItem->Text = L"Ajouter un article";
			this->ajouterUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ajouterUnArticleToolStripMenuItem_Click);
			// 
			// mettreaJourUnArticleToolStripMenuItem
			// 
			this->mettreaJourUnArticleToolStripMenuItem->Name = L"mettreaJourUnArticleToolStripMenuItem";
			this->mettreaJourUnArticleToolStripMenuItem->Size = System::Drawing::Size(386, 30);
			this->mettreaJourUnArticleToolStripMenuItem->Text = L"Mettre a jour un article";
			this->mettreaJourUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mettreaJourUnArticleToolStripMenuItem_Click);
			// 
			// visualiserLesDonneesDunArticleToolStripMenuItem
			// 
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Name = L"visualiserLesDonneesDunArticleToolStripMenuItem";
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Size = System::Drawing::Size(386, 30);
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Text = L"Visualiser les donnees d\'un article";
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualiserLesDonneesDunArticleToolStripMenuItem_Click);
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(124, 29);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			this->statistiquesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::statistiquesToolStripMenuItem_Click);
			// 
			// boxCRclient
			// 
			this->boxCRclient->Controls->Add(this->CP_livr_Client);
			this->boxCRclient->Controls->Add(this->Ville_livr_Client);
			this->boxCRclient->Controls->Add(this->NUMRUE_livr_Client);
			this->boxCRclient->Controls->Add(this->CP_fact_Client);
			this->boxCRclient->Controls->Add(this->VILLE_fact_Client);
			this->boxCRclient->Controls->Add(this->NUMRUE_fact_Client);
			this->boxCRclient->Controls->Add(this->savecreateclientB);
			this->boxCRclient->Controls->Add(this->informationadresse);
			this->boxCRclient->Controls->Add(this->NomClient);
			this->boxCRclient->Controls->Add(this->AnnivClient);
			this->boxCRclient->Controls->Add(this->PrenomClient);
			this->boxCRclient->Controls->Add(this->createclientadrlivL);
			this->boxCRclient->Controls->Add(this->createclientadrfacL);
			this->boxCRclient->Controls->Add(this->createclientbirthL);
			this->boxCRclient->Controls->Add(this->createclientnomL);
			this->boxCRclient->Controls->Add(this->createclientprenomL);
			this->boxCRclient->Location = System::Drawing::Point(0, 36);
			this->boxCRclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->boxCRclient->Name = L"boxCRclient";
			this->boxCRclient->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->boxCRclient->Size = System::Drawing::Size(583, 494);
			this->boxCRclient->TabIndex = 6;
			this->boxCRclient->TabStop = false;
			// 
			// CP_livr_Client
			// 
			this->CP_livr_Client->Location = System::Drawing::Point(465, 260);
			this->CP_livr_Client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CP_livr_Client->Name = L"CP_livr_Client";
			this->CP_livr_Client->Size = System::Drawing::Size(81, 22);
			this->CP_livr_Client->TabIndex = 23;
			// 
			// Ville_livr_Client
			// 
			this->Ville_livr_Client->Location = System::Drawing::Point(363, 260);
			this->Ville_livr_Client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Ville_livr_Client->Name = L"Ville_livr_Client";
			this->Ville_livr_Client->Size = System::Drawing::Size(93, 22);
			this->Ville_livr_Client->TabIndex = 22;
			// 
			// NUMRUE_livr_Client
			// 
			this->NUMRUE_livr_Client->Location = System::Drawing::Point(249, 260);
			this->NUMRUE_livr_Client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->NUMRUE_livr_Client->Name = L"NUMRUE_livr_Client";
			this->NUMRUE_livr_Client->Size = System::Drawing::Size(104, 22);
			this->NUMRUE_livr_Client->TabIndex = 21;
			// 
			// CP_fact_Client
			// 
			this->CP_fact_Client->Location = System::Drawing::Point(465, 210);
			this->CP_fact_Client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CP_fact_Client->Name = L"CP_fact_Client";
			this->CP_fact_Client->Size = System::Drawing::Size(81, 22);
			this->CP_fact_Client->TabIndex = 15;
			// 
			// VILLE_fact_Client
			// 
			this->VILLE_fact_Client->Location = System::Drawing::Point(363, 210);
			this->VILLE_fact_Client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->VILLE_fact_Client->Name = L"VILLE_fact_Client";
			this->VILLE_fact_Client->Size = System::Drawing::Size(93, 22);
			this->VILLE_fact_Client->TabIndex = 14;
			// 
			// NUMRUE_fact_Client
			// 
			this->NUMRUE_fact_Client->Location = System::Drawing::Point(249, 210);
			this->NUMRUE_fact_Client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->NUMRUE_fact_Client->Name = L"NUMRUE_fact_Client";
			this->NUMRUE_fact_Client->Size = System::Drawing::Size(104, 22);
			this->NUMRUE_fact_Client->TabIndex = 13;
			// 
			// savecreateclientB
			// 
			this->savecreateclientB->Location = System::Drawing::Point(193, 459);
			this->savecreateclientB->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->savecreateclientB->Name = L"savecreateclientB";
			this->savecreateclientB->Size = System::Drawing::Size(100, 28);
			this->savecreateclientB->TabIndex = 12;
			this->savecreateclientB->Text = L"Enregistrer";
			this->savecreateclientB->UseVisualStyleBackColor = true;
			this->savecreateclientB->Click += gcnew System::EventHandler(this, &MyForm::savecreateclientB_Click);
			// 
			// informationadresse
			// 
			this->informationadresse->AutoSize = true;
			this->informationadresse->ForeColor = System::Drawing::Color::DimGray;
			this->informationadresse->Location = System::Drawing::Point(15, 176);
			this->informationadresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->informationadresse->Name = L"informationadresse";
			this->informationadresse->Size = System::Drawing::Size(467, 17);
			this->informationadresse->TabIndex = 11;
			this->informationadresse->Text = L"Indiquer une adresse par ligne sous le format (Adresse,Ville,code postal)";
			// 
			// NomClient
			// 
			this->NomClient->Location = System::Drawing::Point(249, 76);
			this->NomClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->NomClient->Name = L"NomClient";
			this->NomClient->Size = System::Drawing::Size(297, 22);
			this->NomClient->TabIndex = 8;
			// 
			// AnnivClient
			// 
			this->AnnivClient->Location = System::Drawing::Point(249, 126);
			this->AnnivClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AnnivClient->Name = L"AnnivClient";
			this->AnnivClient->Size = System::Drawing::Size(297, 22);
			this->AnnivClient->TabIndex = 6;
			// 
			// PrenomClient
			// 
			this->PrenomClient->Location = System::Drawing::Point(249, 27);
			this->PrenomClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->PrenomClient->Name = L"PrenomClient";
			this->PrenomClient->Size = System::Drawing::Size(297, 22);
			this->PrenomClient->TabIndex = 5;
			// 
			// createclientadrlivL
			// 
			this->createclientadrlivL->AutoSize = true;
			this->createclientadrlivL->Location = System::Drawing::Point(15, 263);
			this->createclientadrlivL->Name = L"createclientadrlivL";
			this->createclientadrlivL->Size = System::Drawing::Size(136, 17);
			this->createclientadrlivL->TabIndex = 4;
			this->createclientadrlivL->Text = L"Adresse de livraison";
			// 
			// createclientadrfacL
			// 
			this->createclientadrfacL->AutoSize = true;
			this->createclientadrfacL->Location = System::Drawing::Point(15, 214);
			this->createclientadrfacL->Name = L"createclientadrfacL";
			this->createclientadrfacL->Size = System::Drawing::Size(151, 17);
			this->createclientadrfacL->TabIndex = 3;
			this->createclientadrfacL->Text = L"Adresse de facturation";
			// 
			// createclientbirthL
			// 
			this->createclientbirthL->AutoSize = true;
			this->createclientbirthL->Location = System::Drawing::Point(15, 129);
			this->createclientbirthL->Name = L"createclientbirthL";
			this->createclientbirthL->Size = System::Drawing::Size(222, 17);
			this->createclientbirthL->TabIndex = 2;
			this->createclientbirthL->Text = L"Date de naissance (AAAA-MM-JJ)";
			// 
			// createclientnomL
			// 
			this->createclientnomL->AutoSize = true;
			this->createclientnomL->Location = System::Drawing::Point(15, 80);
			this->createclientnomL->Name = L"createclientnomL";
			this->createclientnomL->Size = System::Drawing::Size(94, 17);
			this->createclientnomL->TabIndex = 1;
			this->createclientnomL->Text = L"Nom du client";
			// 
			// createclientprenomL
			// 
			this->createclientprenomL->AutoSize = true;
			this->createclientprenomL->Location = System::Drawing::Point(15, 31);
			this->createclientprenomL->Name = L"createclientprenomL";
			this->createclientprenomL->Size = System::Drawing::Size(114, 17);
			this->createclientprenomL->TabIndex = 0;
			this->createclientprenomL->Text = L"Prenom du client";
			// 
			// dataview
			// 
			this->dataview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataview->Location = System::Drawing::Point(454, 48);
			this->dataview->Name = L"dataview";
			this->dataview->RowHeadersWidth = 51;
			this->dataview->Size = System::Drawing::Size(426, 369);
			this->dataview->TabIndex = 6;
			this->dataview->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataview_CellContentClick);
			// 
			// boxCRpersonnel
			// 
			this->boxCRpersonnel->Controls->Add(this->textBox46);
			this->boxCRpersonnel->Controls->Add(this->textBox45);
			this->boxCRpersonnel->Controls->Add(this->CreatePersonnelButton);
			this->boxCRpersonnel->Controls->Add(this->label4);
			this->boxCRpersonnel->Controls->Add(this->label3);
			this->boxCRpersonnel->Controls->Add(this->label2);
			this->boxCRpersonnel->Controls->Add(this->label1);
			this->boxCRpersonnel->Controls->Add(this->textBox7);
			this->boxCRpersonnel->Controls->Add(this->textBox6);
			this->boxCRpersonnel->Controls->Add(this->textBox5);
			this->boxCRpersonnel->Controls->Add(this->textBox3);
			this->boxCRpersonnel->Location = System::Drawing::Point(0, 29);
			this->boxCRpersonnel->Name = L"boxCRpersonnel";
			this->boxCRpersonnel->Size = System::Drawing::Size(437, 401);
			this->boxCRpersonnel->TabIndex = 6;
			this->boxCRpersonnel->TabStop = false;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(370, 182);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(41, 22);
			this->textBox46->TabIndex = 10;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(267, 182);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(97, 22);
			this->textBox45->TabIndex = 9;
			// 
			// CreatePersonnelButton
			// 
			this->CreatePersonnelButton->Location = System::Drawing::Point(145, 257);
			this->CreatePersonnelButton->Name = L"CreatePersonnelButton";
			this->CreatePersonnelButton->Size = System::Drawing::Size(75, 23);
			this->CreatePersonnelButton->TabIndex = 8;
			this->CreatePersonnelButton->Text = L"Enregistrer";
			this->CreatePersonnelButton->UseVisualStyleBackColor = true;
			this->CreatePersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::CreatePersonnelButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Adresse (Adresse,Ville,code postal)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date d\'embauche (AAAA-MM-JJ)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nom de l\'employe";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Prenom de l\'employe";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(187, 182);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(74, 22);
			this->textBox7->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(187, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(224, 22);
			this->textBox6->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(187, 102);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(224, 22);
			this->textBox5->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 62);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(224, 22);
			this->textBox3->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// BoxCRcommande
			// 
			this->BoxCRcommande->Controls->Add(this->textBox10);
			this->BoxCRcommande->Controls->Add(this->label7);
			this->BoxCRcommande->Controls->Add(this->validcommandB);
			this->BoxCRcommande->Location = System::Drawing::Point(0, 29);
			this->BoxCRcommande->Name = L"BoxCRcommande";
			this->BoxCRcommande->Size = System::Drawing::Size(896, 401);
			this->BoxCRcommande->TabIndex = 10;
			this->BoxCRcommande->TabStop = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(174, 52);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(77, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"label7";
			// 
			// validcommandB
			// 
			this->validcommandB->Location = System::Drawing::Point(388, 331);
			this->validcommandB->Name = L"validcommandB";
			this->validcommandB->Size = System::Drawing::Size(114, 23);
			this->validcommandB->TabIndex = 0;
			this->validcommandB->Text = L"Valider la commande";
			this->validcommandB->UseVisualStyleBackColor = true;
			// 
			// BoxDEpersonnel
			// 
			this->BoxDEpersonnel->Controls->Add(this->textBox25);
			this->BoxDEpersonnel->Controls->Add(this->textBox24);
			this->BoxDEpersonnel->Controls->Add(this->label22);
			this->BoxDEpersonnel->Controls->Add(this->label21);
			this->BoxDEpersonnel->Controls->Add(this->DeletePersonnelButton);
			this->BoxDEpersonnel->Location = System::Drawing::Point(0, 29);
			this->BoxDEpersonnel->Name = L"BoxDEpersonnel";
			this->BoxDEpersonnel->Size = System::Drawing::Size(437, 401);
			this->BoxDEpersonnel->TabIndex = 7;
			this->BoxDEpersonnel->TabStop = false;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(176, 109);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 22);
			this->textBox25->TabIndex = 4;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(176, 56);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 22);
			this->textBox24->TabIndex = 3;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(41, 112);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(124, 17);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Nom du personnel";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(41, 63);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(144, 17);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Prenom du personnel";
			// 
			// DeletePersonnelButton
			// 
			this->DeletePersonnelButton->Location = System::Drawing::Point(176, 177);
			this->DeletePersonnelButton->Name = L"DeletePersonnelButton";
			this->DeletePersonnelButton->Size = System::Drawing::Size(75, 23);
			this->DeletePersonnelButton->TabIndex = 0;
			this->DeletePersonnelButton->Text = L"Rechercher";
			this->DeletePersonnelButton->UseVisualStyleBackColor = true;
			this->DeletePersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::DeletePersonnelButton_Click);
			// 
			// BoxDEcommande
			// 
			this->BoxDEcommande->Location = System::Drawing::Point(0, 29);
			this->BoxDEcommande->Name = L"BoxDEcommande";
			this->BoxDEcommande->Size = System::Drawing::Size(437, 401);
			this->BoxDEcommande->TabIndex = 8;
			this->BoxDEcommande->TabStop = false;
			// 
			// BoxDEstock
			// 
			this->BoxDEstock->Location = System::Drawing::Point(0, 29);
			this->BoxDEstock->Name = L"BoxDEstock";
			this->BoxDEstock->Size = System::Drawing::Size(437, 401);
			this->BoxDEstock->TabIndex = 9;
			this->BoxDEstock->TabStop = false;
			// 
			// BoxCRstock
			// 
			this->BoxCRstock->Controls->Add(this->textBox23);
			this->BoxCRstock->Controls->Add(this->textBox22);
			this->BoxCRstock->Controls->Add(this->textBox21);
			this->BoxCRstock->Controls->Add(this->textBox20);
			this->BoxCRstock->Controls->Add(this->textBox19);
			this->BoxCRstock->Controls->Add(this->textBox18);
			this->BoxCRstock->Controls->Add(this->CouleurArticleCR);
			this->BoxCRstock->Controls->Add(this->label20);
			this->BoxCRstock->Controls->Add(this->label19);
			this->BoxCRstock->Controls->Add(this->label18);
			this->BoxCRstock->Controls->Add(this->label17);
			this->BoxCRstock->Controls->Add(this->label16);
			this->BoxCRstock->Controls->Add(this->label15);
			this->BoxCRstock->Controls->Add(this->label14);
			this->BoxCRstock->Controls->Add(this->NatureArticleCR);
			this->BoxCRstock->Controls->Add(this->label13);
			this->BoxCRstock->Controls->Add(this->CRarticleButton);
			this->BoxCRstock->Location = System::Drawing::Point(0, 29);
			this->BoxCRstock->Name = L"BoxCRstock";
			this->BoxCRstock->Size = System::Drawing::Size(437, 401);
			this->BoxCRstock->TabIndex = 9;
			this->BoxCRstock->TabStop = false;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(165, 264);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(225, 22);
			this->textBox23->TabIndex = 16;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(165, 230);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(225, 22);
			this->textBox22->TabIndex = 15;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(165, 194);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(225, 22);
			this->textBox21->TabIndex = 14;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(165, 160);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(225, 22);
			this->textBox20->TabIndex = 13;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(165, 128);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(225, 22);
			this->textBox19->TabIndex = 12;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(165, 94);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(225, 22);
			this->textBox18->TabIndex = 11;
			// 
			// CouleurArticleCR
			// 
			this->CouleurArticleCR->Location = System::Drawing::Point(165, 63);
			this->CouleurArticleCR->Name = L"CouleurArticleCR";
			this->CouleurArticleCR->Size = System::Drawing::Size(225, 22);
			this->CouleurArticleCR->TabIndex = 10;
			this->CouleurArticleCR->TextChanged += gcnew System::EventHandler(this, &MyForm::CouleurArticleCR_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(29, 267);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 17);
			this->label20->TabIndex = 9;
			this->label20->Text = L"TVA";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(29, 233);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 17);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Prix HT";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(29, 197);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 17);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Prix d\'achat";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(29, 163);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(174, 17);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Seuil d\'approvisionnement";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(29, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 17);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Quantite disponible";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(29, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 17);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Designation";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(29, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(125, 17);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Couleur de l\'article";
			// 
			// NatureArticleCR
			// 
			this->NatureArticleCR->Location = System::Drawing::Point(165, 32);
			this->NatureArticleCR->Name = L"NatureArticleCR";
			this->NatureArticleCR->Size = System::Drawing::Size(225, 22);
			this->NatureArticleCR->TabIndex = 2;
			this->NatureArticleCR->TextChanged += gcnew System::EventHandler(this, &MyForm::NatureArticleCR_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(29, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 17);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Nature de l\'article";
			// 
			// CRarticleButton
			// 
			this->CRarticleButton->Location = System::Drawing::Point(165, 318);
			this->CRarticleButton->Name = L"CRarticleButton";
			this->CRarticleButton->Size = System::Drawing::Size(75, 23);
			this->CRarticleButton->TabIndex = 0;
			this->CRarticleButton->Text = L"Enregistrer";
			this->CRarticleButton->UseVisualStyleBackColor = true;
			this->CRarticleButton->Click += gcnew System::EventHandler(this, &MyForm::CRarticleButton_Click);
			// 
			// BoxREpersonnel
			// 
			this->BoxREpersonnel->Controls->Add(this->ReadPersonnelButton);
			this->BoxREpersonnel->Controls->Add(this->label9);
			this->BoxREpersonnel->Controls->Add(this->label8);
			this->BoxREpersonnel->Controls->Add(this->textBox12);
			this->BoxREpersonnel->Controls->Add(this->textBox11);
			this->BoxREpersonnel->Location = System::Drawing::Point(0, 29);
			this->BoxREpersonnel->Name = L"BoxREpersonnel";
			this->BoxREpersonnel->Size = System::Drawing::Size(437, 401);
			this->BoxREpersonnel->TabIndex = 9;
			this->BoxREpersonnel->TabStop = false;
			// 
			// ReadPersonnelButton
			// 
			this->ReadPersonnelButton->Location = System::Drawing::Point(160, 228);
			this->ReadPersonnelButton->Name = L"ReadPersonnelButton";
			this->ReadPersonnelButton->Size = System::Drawing::Size(75, 23);
			this->ReadPersonnelButton->TabIndex = 4;
			this->ReadPersonnelButton->Text = L"Rechercher";
			this->ReadPersonnelButton->UseVisualStyleBackColor = true;
			this->ReadPersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::ReadPersonnelButton_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(35, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Nom du personnel";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(35, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 17);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Prenom du personnel";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(160, 114);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 1;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(160, 66);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 0;
			// 
			// BoxREstock
			// 
			this->BoxREstock->Controls->Add(this->textBox15);
			this->BoxREstock->Controls->Add(this->label12);
			this->BoxREstock->Controls->Add(this->RechercheArticleButton);
			this->BoxREstock->Location = System::Drawing::Point(0, 29);
			this->BoxREstock->Name = L"BoxREstock";
			this->BoxREstock->Size = System::Drawing::Size(437, 401);
			this->BoxREstock->TabIndex = 9;
			this->BoxREstock->TabStop = false;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(193, 107);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(53, 110);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(142, 17);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Reference de l\'article";
			// 
			// RechercheArticleButton
			// 
			this->RechercheArticleButton->Location = System::Drawing::Point(193, 210);
			this->RechercheArticleButton->Name = L"RechercheArticleButton";
			this->RechercheArticleButton->Size = System::Drawing::Size(75, 23);
			this->RechercheArticleButton->TabIndex = 0;
			this->RechercheArticleButton->Text = L"Rechercher";
			this->RechercheArticleButton->UseVisualStyleBackColor = true;
			this->RechercheArticleButton->Click += gcnew System::EventHandler(this, &MyForm::RechercheArticleButton_Click);
			// 
			// BoxREclient
			// 
			this->BoxREclient->Controls->Add(this->voirclientRead);
			this->BoxREclient->Controls->Add(this->label6);
			this->BoxREclient->Controls->Add(this->label5);
			this->BoxREclient->Controls->Add(this->NomClient3);
			this->BoxREclient->Controls->Add(this->PrenomClient3);
			this->BoxREclient->Location = System::Drawing::Point(0, 29);
			this->BoxREclient->Name = L"BoxREclient";
			this->BoxREclient->Size = System::Drawing::Size(437, 401);
			this->BoxREclient->TabIndex = 9;
			this->BoxREclient->TabStop = false;
			// 
			// voirclientRead
			// 
			this->voirclientRead->Location = System::Drawing::Point(182, 181);
			this->voirclientRead->Name = L"voirclientRead";
			this->voirclientRead->Size = System::Drawing::Size(75, 23);
			this->voirclientRead->TabIndex = 6;
			this->voirclientRead->Text = L"Rechercher";
			this->voirclientRead->UseVisualStyleBackColor = true;
			this->voirclientRead->Click += gcnew System::EventHandler(this, &MyForm::voirclientRead_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Nom du client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Prenom du client";
			// 
			// NomClient3
			// 
			this->NomClient3->Location = System::Drawing::Point(182, 118);
			this->NomClient3->Name = L"NomClient3";
			this->NomClient3->Size = System::Drawing::Size(100, 22);
			this->NomClient3->TabIndex = 1;
			// 
			// PrenomClient3
			// 
			this->PrenomClient3->Location = System::Drawing::Point(182, 54);
			this->PrenomClient3->Name = L"PrenomClient3";
			this->PrenomClient3->Size = System::Drawing::Size(100, 22);
			this->PrenomClient3->TabIndex = 0;
			// 
			// BoxUPstock
			// 
			this->BoxUPstock->Controls->Add(this->textBox53);
			this->BoxUPstock->Controls->Add(this->label34);
			this->BoxUPstock->Controls->Add(this->RechercheArticleButton_4_Update);
			this->BoxUPstock->Location = System::Drawing::Point(0, 29);
			this->BoxUPstock->Name = L"BoxUPstock";
			this->BoxUPstock->Size = System::Drawing::Size(437, 401);
			this->BoxUPstock->TabIndex = 9;
			this->BoxUPstock->TabStop = false;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(167, 78);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(100, 22);
			this->textBox53->TabIndex = 2;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(30, 81);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(151, 17);
			this->label34->TabIndex = 1;
			this->label34->Text = L"Designation de l\'article";
			// 
			// RechercheArticleButton_4_Update
			// 
			this->RechercheArticleButton_4_Update->Location = System::Drawing::Point(167, 136);
			this->RechercheArticleButton_4_Update->Name = L"RechercheArticleButton_4_Update";
			this->RechercheArticleButton_4_Update->Size = System::Drawing::Size(75, 23);
			this->RechercheArticleButton_4_Update->TabIndex = 0;
			this->RechercheArticleButton_4_Update->Text = L"Rechercher";
			this->RechercheArticleButton_4_Update->UseVisualStyleBackColor = true;
			this->RechercheArticleButton_4_Update->Click += gcnew System::EventHandler(this, &MyForm::RechercheArticleButton_4_Update_Click);
			// 
			// BoxREcommande
			// 
			this->BoxREcommande->Controls->Add(this->textBox14);
			this->BoxREcommande->Controls->Add(this->label11);
			this->BoxREcommande->Controls->Add(this->button4);
			this->BoxREcommande->Controls->Add(this->textBox13);
			this->BoxREcommande->Controls->Add(this->label10);
			this->BoxREcommande->Location = System::Drawing::Point(0, 29);
			this->BoxREcommande->Name = L"BoxREcommande";
			this->BoxREcommande->Size = System::Drawing::Size(437, 401);
			this->BoxREcommande->TabIndex = 9;
			this->BoxREcommande->TabStop = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(160, 117);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 4;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(41, 120);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 17);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Nom du client";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Rechercher";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(160, 70);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(41, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Prenom du client";
			// 
			// BoxUPcommande
			// 
			this->BoxUPcommande->Location = System::Drawing::Point(0, 29);
			this->BoxUPcommande->Name = L"BoxUPcommande";
			this->BoxUPcommande->Size = System::Drawing::Size(437, 401);
			this->BoxUPcommande->TabIndex = 9;
			this->BoxUPcommande->TabStop = false;
			// 
			// BoxUPclient
			// 
			this->BoxUPclient->Controls->Add(this->PrenomClient4);
			this->BoxUPclient->Controls->Add(this->NomClient4);
			this->BoxUPclient->Controls->Add(this->label26);
			this->BoxUPclient->Controls->Add(this->label25);
			this->BoxUPclient->Controls->Add(this->voirclientUpdate);
			this->BoxUPclient->Location = System::Drawing::Point(0, 29);
			this->BoxUPclient->Name = L"BoxUPclient";
			this->BoxUPclient->Size = System::Drawing::Size(437, 401);
			this->BoxUPclient->TabIndex = 9;
			this->BoxUPclient->TabStop = false;
			// 
			// PrenomClient4
			// 
			this->PrenomClient4->Location = System::Drawing::Point(159, 63);
			this->PrenomClient4->Name = L"PrenomClient4";
			this->PrenomClient4->Size = System::Drawing::Size(100, 22);
			this->PrenomClient4->TabIndex = 7;
			// 
			// NomClient4
			// 
			this->NomClient4->Location = System::Drawing::Point(159, 20);
			this->NomClient4->Name = L"NomClient4";
			this->NomClient4->Size = System::Drawing::Size(100, 22);
			this->NomClient4->TabIndex = 6;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(27, 71);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(57, 17);
			this->label26->TabIndex = 5;
			this->label26->Text = L"Prenom";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(27, 23);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(37, 17);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Nom";
			// 
			// voirclientUpdate
			// 
			this->voirclientUpdate->Location = System::Drawing::Point(159, 119);
			this->voirclientUpdate->Name = L"voirclientUpdate";
			this->voirclientUpdate->Size = System::Drawing::Size(75, 23);
			this->voirclientUpdate->TabIndex = 0;
			this->voirclientUpdate->Text = L"Rechercher";
			this->voirclientUpdate->UseVisualStyleBackColor = true;
			this->voirclientUpdate->Click += gcnew System::EventHandler(this, &MyForm::voirclientUpdate_Click);
			// 
			// Rechercheclient
			// 
			this->Rechercheclient->Controls->Add(this->AnnivClient2);
			this->Rechercheclient->Controls->Add(this->label27);
			this->Rechercheclient->Controls->Add(this->label24);
			this->Rechercheclient->Controls->Add(this->PrenomClient2);
			this->Rechercheclient->Controls->Add(this->NomClient2);
			this->Rechercheclient->Controls->Add(this->label23);
			this->Rechercheclient->Controls->Add(this->UpdateclientButton);
			this->Rechercheclient->Controls->Add(this->ajoutAdresseFact);
			this->Rechercheclient->Controls->Add(this->ajoutAdresseLivr);
			this->Rechercheclient->Controls->Add(this->CPClient2);
			this->Rechercheclient->Controls->Add(this->CPClient);
			this->Rechercheclient->Controls->Add(this->VILLEClient2);
			this->Rechercheclient->Controls->Add(this->VILLEClient);
			this->Rechercheclient->Controls->Add(this->NUMRUEClient2);
			this->Rechercheclient->Controls->Add(this->NUMRUEClient);
			this->Rechercheclient->Controls->Add(this->label29);
			this->Rechercheclient->Controls->Add(this->label28);
			this->Rechercheclient->Location = System::Drawing::Point(9, 49);
			this->Rechercheclient->Name = L"Rechercheclient";
			this->Rechercheclient->Size = System::Drawing::Size(434, 354);
			this->Rechercheclient->TabIndex = 0;
			this->Rechercheclient->TabStop = false;
			// 
			// AnnivClient2
			// 
			this->AnnivClient2->Location = System::Drawing::Point(147, 134);
			this->AnnivClient2->Name = L"AnnivClient2";
			this->AnnivClient2->Size = System::Drawing::Size(100, 22);
			this->AnnivClient2->TabIndex = 7;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(2, 137);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(131, 17);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Date d\'anniversaire";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(2, 55);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(37, 17);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Nom";
			// 
			// PrenomClient2
			// 
			this->PrenomClient2->Location = System::Drawing::Point(147, 96);
			this->PrenomClient2->Name = L"PrenomClient2";
			this->PrenomClient2->Size = System::Drawing::Size(100, 22);
			this->PrenomClient2->TabIndex = 3;
			// 
			// NomClient2
			// 
			this->NomClient2->Location = System::Drawing::Point(147, 52);
			this->NomClient2->Name = L"NomClient2";
			this->NomClient2->Size = System::Drawing::Size(100, 22);
			this->NomClient2->TabIndex = 2;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(2, 99);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(57, 17);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Prenom";
			// 
			// UpdateclientButton
			// 
			this->UpdateclientButton->Location = System::Drawing::Point(159, 158);
			this->UpdateclientButton->Name = L"UpdateclientButton";
			this->UpdateclientButton->Size = System::Drawing::Size(75, 23);
			this->UpdateclientButton->TabIndex = 0;
			this->UpdateclientButton->Text = L"Enregistrer";
			this->UpdateclientButton->UseVisualStyleBackColor = true;
			this->UpdateclientButton->Click += gcnew System::EventHandler(this, &MyForm::UpdateclientButton_Click);
			// 
			// ajoutAdresseFact
			// 
			this->ajoutAdresseFact->Location = System::Drawing::Point(132, 298);
			this->ajoutAdresseFact->Name = L"ajoutAdresseFact";
			this->ajoutAdresseFact->Size = System::Drawing::Size(132, 23);
			this->ajoutAdresseFact->TabIndex = 17;
			this->ajoutAdresseFact->Text = L"Ajouter une adresse";
			this->ajoutAdresseFact->UseVisualStyleBackColor = true;
			this->ajoutAdresseFact->Click += gcnew System::EventHandler(this, &MyForm::ajoutAdresseFact_Click);
			// 
			// ajoutAdresseLivr
			// 
			this->ajoutAdresseLivr->Location = System::Drawing::Point(132, 217);
			this->ajoutAdresseLivr->Name = L"ajoutAdresseLivr";
			this->ajoutAdresseLivr->Size = System::Drawing::Size(132, 23);
			this->ajoutAdresseLivr->TabIndex = 16;
			this->ajoutAdresseLivr->Text = L"Ajouter une adresse";
			this->ajoutAdresseLivr->UseVisualStyleBackColor = true;
			this->ajoutAdresseLivr->Click += gcnew System::EventHandler(this, &MyForm::ajoutAdresseLivr_Click);
			// 
			// CPClient2
			// 
			this->CPClient2->Location = System::Drawing::Point(340, 272);
			this->CPClient2->Name = L"CPClient2";
			this->CPClient2->Size = System::Drawing::Size(66, 22);
			this->CPClient2->TabIndex = 15;
			// 
			// CPClient
			// 
			this->CPClient->Location = System::Drawing::Point(340, 191);
			this->CPClient->Name = L"CPClient";
			this->CPClient->Size = System::Drawing::Size(66, 22);
			this->CPClient->TabIndex = 14;
			// 
			// VILLEClient2
			// 
			this->VILLEClient2->Location = System::Drawing::Point(218, 272);
			this->VILLEClient2->Name = L"VILLEClient2";
			this->VILLEClient2->Size = System::Drawing::Size(116, 22);
			this->VILLEClient2->TabIndex = 13;
			// 
			// VILLEClient
			// 
			this->VILLEClient->Location = System::Drawing::Point(218, 191);
			this->VILLEClient->Name = L"VILLEClient";
			this->VILLEClient->Size = System::Drawing::Size(116, 22);
			this->VILLEClient->TabIndex = 12;
			// 
			// NUMRUEClient2
			// 
			this->NUMRUEClient2->Location = System::Drawing::Point(112, 272);
			this->NUMRUEClient2->Name = L"NUMRUEClient2";
			this->NUMRUEClient2->Size = System::Drawing::Size(100, 22);
			this->NUMRUEClient2->TabIndex = 11;
			// 
			// NUMRUEClient
			// 
			this->NUMRUEClient->Location = System::Drawing::Point(112, 191);
			this->NUMRUEClient->Name = L"NUMRUEClient";
			this->NUMRUEClient->Size = System::Drawing::Size(100, 22);
			this->NUMRUEClient->TabIndex = 10;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(2, 270);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(155, 34);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Adresse de facturation \n supplémentaire";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(2, 189);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(140, 34);
			this->label28->TabIndex = 8;
			this->label28->Text = L"Adresse de livraison \n supplémentaire";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(180, 98);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(8, 22);
			this->textBox27->TabIndex = 3;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(180, 52);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(8, 22);
			this->textBox26->TabIndex = 2;
			// 
			// BoxDEclient
			// 
			this->BoxDEclient->Location = System::Drawing::Point(0, 29);
			this->BoxDEclient->Name = L"BoxDEclient";
			this->BoxDEclient->Size = System::Drawing::Size(437, 401);
			this->BoxDEclient->TabIndex = 9;
			this->BoxDEclient->TabStop = false;
			// 
			// BoxUPpersonnel
			// 
			this->BoxUPpersonnel->Location = System::Drawing::Point(0, 29);
			this->BoxUPpersonnel->Name = L"BoxUPpersonnel";
			this->BoxUPpersonnel->Size = System::Drawing::Size(437, 401);
			this->BoxUPpersonnel->TabIndex = 9;
			this->BoxUPpersonnel->TabStop = false;
			// 
			// selectedonglet
			// 
			this->selectedonglet->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->selectedonglet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectedonglet->Location = System::Drawing::Point(725, 0);
			this->selectedonglet->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->selectedonglet->Name = L"selectedonglet";
			this->selectedonglet->Size = System::Drawing::Size(469, 34);
			this->selectedonglet->TabIndex = 8;
			this->selectedonglet->Text = L"Accueil";
			this->selectedonglet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dataviewUPclient
			// 
			this->dataviewUPclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewUPclient->Location = System::Drawing::Point(454, 48);
			this->dataviewUPclient->Name = L"dataviewUPclient";
			this->dataviewUPclient->RowHeadersWidth = 51;
			this->dataviewUPclient->Size = System::Drawing::Size(426, 369);
			this->dataviewUPclient->TabIndex = 9;
			this->dataviewUPclient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewUPclient_CellContentClick);
			// 
			// dataviewREclient
			// 
			this->dataviewREclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewREclient->Location = System::Drawing::Point(454, 48);
			this->dataviewREclient->Name = L"dataviewREclient";
			this->dataviewREclient->RowHeadersWidth = 51;
			this->dataviewREclient->Size = System::Drawing::Size(426, 369);
			this->dataviewREclient->TabIndex = 10;
			this->dataviewREclient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewREclient_CellContentClick);
			// 
			// TransitionClientCommande
			// 
			this->TransitionClientCommande->Location = System::Drawing::Point(155, 300);
			this->TransitionClientCommande->Name = L"TransitionClientCommande";
			this->TransitionClientCommande->Size = System::Drawing::Size(125, 23);
			this->TransitionClientCommande->TabIndex = 11;
			this->TransitionClientCommande->Text = L"Passer une commande";
			this->TransitionClientCommande->UseVisualStyleBackColor = true;
			this->TransitionClientCommande->Click += gcnew System::EventHandler(this, &MyForm::TransitionClientCommande_Click);
			// 
			// Bupdatepersonnel
			// 
			this->Bupdatepersonnel->Controls->Add(this->IDSUP_Personnel);
			this->Bupdatepersonnel->Controls->Add(this->label33);
			this->Bupdatepersonnel->Controls->Add(this->CPPersonnel);
			this->Bupdatepersonnel->Controls->Add(this->VillePersonnel);
			this->Bupdatepersonnel->Controls->Add(this->NUMRUEPersonnel);
			this->Bupdatepersonnel->Controls->Add(this->PrenomPersonnel);
			this->Bupdatepersonnel->Controls->Add(this->label32);
			this->Bupdatepersonnel->Controls->Add(this->label31);
			this->Bupdatepersonnel->Controls->Add(this->NomPersonnel);
			this->Bupdatepersonnel->Controls->Add(this->label30);
			this->Bupdatepersonnel->Controls->Add(this->UpdatePersonnelButton);
			this->Bupdatepersonnel->Location = System::Drawing::Point(0, 32);
			this->Bupdatepersonnel->Name = L"Bupdatepersonnel";
			this->Bupdatepersonnel->Size = System::Drawing::Size(442, 401);
			this->Bupdatepersonnel->TabIndex = 9;
			this->Bupdatepersonnel->TabStop = false;
			// 
			// IDSUP_Personnel
			// 
			this->IDSUP_Personnel->Location = System::Drawing::Point(146, 133);
			this->IDSUP_Personnel->Name = L"IDSUP_Personnel";
			this->IDSUP_Personnel->Size = System::Drawing::Size(100, 22);
			this->IDSUP_Personnel->TabIndex = 10;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(36, 136);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(105, 17);
			this->label33->TabIndex = 9;
			this->label33->Text = L"ID du supérieur";
			// 
			// CPPersonnel
			// 
			this->CPPersonnel->Location = System::Drawing::Point(358, 185);
			this->CPPersonnel->Name = L"CPPersonnel";
			this->CPPersonnel->Size = System::Drawing::Size(78, 22);
			this->CPPersonnel->TabIndex = 8;
			// 
			// VillePersonnel
			// 
			this->VillePersonnel->Location = System::Drawing::Point(252, 185);
			this->VillePersonnel->Name = L"VillePersonnel";
			this->VillePersonnel->Size = System::Drawing::Size(100, 22);
			this->VillePersonnel->TabIndex = 7;
			// 
			// NUMRUEPersonnel
			// 
			this->NUMRUEPersonnel->Location = System::Drawing::Point(146, 185);
			this->NUMRUEPersonnel->Name = L"NUMRUEPersonnel";
			this->NUMRUEPersonnel->Size = System::Drawing::Size(100, 22);
			this->NUMRUEPersonnel->TabIndex = 6;
			// 
			// PrenomPersonnel
			// 
			this->PrenomPersonnel->Location = System::Drawing::Point(146, 99);
			this->PrenomPersonnel->Name = L"PrenomPersonnel";
			this->PrenomPersonnel->Size = System::Drawing::Size(100, 22);
			this->PrenomPersonnel->TabIndex = 5;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(36, 190);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(147, 17);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Adresse du personnel";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(36, 102);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(144, 17);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Prenom du personnel";
			// 
			// NomPersonnel
			// 
			this->NomPersonnel->Location = System::Drawing::Point(146, 62);
			this->NomPersonnel->Name = L"NomPersonnel";
			this->NomPersonnel->Size = System::Drawing::Size(100, 22);
			this->NomPersonnel->TabIndex = 2;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(36, 65);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(124, 17);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Nom du personnel";
			// 
			// UpdatePersonnelButton
			// 
			this->UpdatePersonnelButton->Location = System::Drawing::Point(160, 253);
			this->UpdatePersonnelButton->Name = L"UpdatePersonnelButton";
			this->UpdatePersonnelButton->Size = System::Drawing::Size(75, 23);
			this->UpdatePersonnelButton->TabIndex = 0;
			this->UpdatePersonnelButton->Text = L"Enregistrer";
			this->UpdatePersonnelButton->UseVisualStyleBackColor = true;
			this->UpdatePersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::UpdatePersonnelButton_Click);
			// 
			// dataviewdepersonnel
			// 
			this->dataviewdepersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewdepersonnel->Location = System::Drawing::Point(454, 48);
			this->dataviewdepersonnel->Name = L"dataviewdepersonnel";
			this->dataviewdepersonnel->RowHeadersWidth = 51;
			this->dataviewdepersonnel->Size = System::Drawing::Size(425, 369);
			this->dataviewdepersonnel->TabIndex = 9;
			this->dataviewdepersonnel->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewdepersonnel_CellContentClick);
			// 
			// supprpersonnelButton
			// 
			this->supprpersonnelButton->Location = System::Drawing::Point(146, 253);
			this->supprpersonnelButton->Name = L"supprpersonnelButton";
			this->supprpersonnelButton->Size = System::Drawing::Size(141, 23);
			this->supprpersonnelButton->TabIndex = 10;
			this->supprpersonnelButton->Text = L"Supprimer le personnel";
			this->supprpersonnelButton->UseVisualStyleBackColor = true;
			this->supprpersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::UpdatePersonnelButton2_Click);
			// 
			// dataviewnature
			// 
			this->dataviewnature->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewnature->Location = System::Drawing::Point(454, 48);
			this->dataviewnature->Name = L"dataviewnature";
			this->dataviewnature->RowHeadersWidth = 51;
			this->dataviewnature->Size = System::Drawing::Size(425, 369);
			this->dataviewnature->TabIndex = 10;
			this->dataviewnature->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewnature_CellContentClick);
			// 
			// dataviewcouleur
			// 
			this->dataviewcouleur->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewcouleur->Location = System::Drawing::Point(454, 48);
			this->dataviewcouleur->Name = L"dataviewcouleur";
			this->dataviewcouleur->RowHeadersWidth = 51;
			this->dataviewcouleur->Size = System::Drawing::Size(425, 369);
			this->dataviewcouleur->TabIndex = 11;
			this->dataviewcouleur->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewcouleur_CellContentClick);
			// 
			// dataviewUpstock
			// 
			this->dataviewUpstock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewUpstock->Location = System::Drawing::Point(597, 44);
			this->dataviewUpstock->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataviewUpstock->Name = L"dataviewUpstock";
			this->dataviewUpstock->RowHeadersWidth = 51;
			this->dataviewUpstock->Size = System::Drawing::Size(581, 485);
			this->dataviewUpstock->TabIndex = 10;
			this->dataviewUpstock->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewUpstock_CellContentClick);
			// 
			// BOXupS
			// 
			this->BOXupS->Controls->Add(this->TVAArticle);
			this->BOXupS->Controls->Add(this->label40);
			this->BOXupS->Controls->Add(this->PrixHTArticle);
			this->BOXupS->Controls->Add(this->label39);
			this->BOXupS->Controls->Add(this->PrixAchatArticle);
			this->BOXupS->Controls->Add(this->label38);
			this->BOXupS->Controls->Add(this->SeuilArticle);
			this->BOXupS->Controls->Add(this->label37);
			this->BOXupS->Controls->Add(this->QuantiteArticle);
			this->BOXupS->Controls->Add(this->label36);
			this->BOXupS->Controls->Add(this->DesignationArticle);
			this->BOXupS->Controls->Add(this->label35);
			this->BOXupS->Controls->Add(this->ArticleButtonUpdate);
			this->BOXupS->Location = System::Drawing::Point(3, 31);
			this->BOXupS->Name = L"BOXupS";
			this->BOXupS->Size = System::Drawing::Size(440, 400);
			this->BOXupS->TabIndex = 11;
			this->BOXupS->TabStop = false;
			// 
			// TVAArticle
			// 
			this->TVAArticle->Location = System::Drawing::Point(177, 263);
			this->TVAArticle->Name = L"TVAArticle";
			this->TVAArticle->Size = System::Drawing::Size(100, 22);
			this->TVAArticle->TabIndex = 12;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(33, 266);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(35, 17);
			this->label40->TabIndex = 11;
			this->label40->Text = L"TVA";
			// 
			// PrixHTArticle
			// 
			this->PrixHTArticle->Location = System::Drawing::Point(177, 216);
			this->PrixHTArticle->Name = L"PrixHTArticle";
			this->PrixHTArticle->Size = System::Drawing::Size(100, 22);
			this->PrixHTArticle->TabIndex = 10;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(33, 219);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(100, 17);
			this->label39->TabIndex = 9;
			this->label39->Text = L"Prix Hors Taxe";
			// 
			// PrixAchatArticle
			// 
			this->PrixAchatArticle->Location = System::Drawing::Point(177, 175);
			this->PrixAchatArticle->Name = L"PrixAchatArticle";
			this->PrixAchatArticle->Size = System::Drawing::Size(100, 22);
			this->PrixAchatArticle->TabIndex = 8;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(33, 178);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(81, 17);
			this->label38->TabIndex = 7;
			this->label38->Text = L"Prix d\'achat";
			// 
			// SeuilArticle
			// 
			this->SeuilArticle->Location = System::Drawing::Point(177, 127);
			this->SeuilArticle->Name = L"SeuilArticle";
			this->SeuilArticle->Size = System::Drawing::Size(100, 22);
			this->SeuilArticle->TabIndex = 6;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(33, 130);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(174, 17);
			this->label37->TabIndex = 5;
			this->label37->Text = L"Seuil d\'approvisionnement";
			// 
			// QuantiteArticle
			// 
			this->QuantiteArticle->Location = System::Drawing::Point(177, 84);
			this->QuantiteArticle->Name = L"QuantiteArticle";
			this->QuantiteArticle->Size = System::Drawing::Size(100, 22);
			this->QuantiteArticle->TabIndex = 4;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(33, 87);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(130, 17);
			this->label36->TabIndex = 3;
			this->label36->Text = L"Quantité disponible";
			// 
			// DesignationArticle
			// 
			this->DesignationArticle->Location = System::Drawing::Point(177, 48);
			this->DesignationArticle->Name = L"DesignationArticle";
			this->DesignationArticle->Size = System::Drawing::Size(100, 22);
			this->DesignationArticle->TabIndex = 2;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(33, 51);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(151, 17);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Désignation de l\'article";
			// 
			// ArticleButtonUpdate
			// 
			this->ArticleButtonUpdate->Location = System::Drawing::Point(184, 327);
			this->ArticleButtonUpdate->Name = L"ArticleButtonUpdate";
			this->ArticleButtonUpdate->Size = System::Drawing::Size(75, 23);
			this->ArticleButtonUpdate->TabIndex = 0;
			this->ArticleButtonUpdate->Text = L"Enregistrer";
			this->ArticleButtonUpdate->UseVisualStyleBackColor = true;
			this->ArticleButtonUpdate->Click += gcnew System::EventHandler(this, &MyForm::ArticleButtonUpdate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 530);
			this->Controls->Add(this->boxCRclient);
			this->Controls->Add(this->dataviewUpstock);
			this->Controls->Add(this->selectedonglet);
			this->Controls->Add(this->menuStrip1);
			this->Location = System::Drawing::Point(12, 42);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Rangetesclients.net";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->boxCRclient->ResumeLayout(false);
			this->boxCRclient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->EndInit();
			this->boxCRpersonnel->ResumeLayout(false);
			this->boxCRpersonnel->PerformLayout();
			this->BoxCRcommande->ResumeLayout(false);
			this->BoxCRcommande->PerformLayout();
			this->BoxDEpersonnel->ResumeLayout(false);
			this->BoxDEpersonnel->PerformLayout();
			this->BoxCRstock->ResumeLayout(false);
			this->BoxCRstock->PerformLayout();
			this->BoxREpersonnel->ResumeLayout(false);
			this->BoxREpersonnel->PerformLayout();
			this->BoxREstock->ResumeLayout(false);
			this->BoxREstock->PerformLayout();
			this->BoxREclient->ResumeLayout(false);
			this->BoxREclient->PerformLayout();
			this->BoxUPstock->ResumeLayout(false);
			this->BoxUPstock->PerformLayout();
			this->BoxREcommande->ResumeLayout(false);
			this->BoxREcommande->PerformLayout();
			this->BoxUPclient->ResumeLayout(false);
			this->BoxUPclient->PerformLayout();
			this->Rechercheclient->ResumeLayout(false);
			this->Rechercheclient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewUPclient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewREclient))->EndInit();
			this->Bupdatepersonnel->ResumeLayout(false);
			this->Bupdatepersonnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewdepersonnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewnature))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewcouleur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewUpstock))->EndInit();
			this->BOXupS->ResumeLayout(false);
			this->BOXupS->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*-------------------------------------------------------------------------------------------------------------------------------------------
							
////////////////////////////////////////////////	Rangement des CellContentClick		/////////////////////////////////////////////////////
													
-------------------------------------------------------------------------------------------------------------------------------------------*/

private: System::Void dataviewdepersonnel_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	id = Convert::ToInt32(dataviewdepersonnel->Rows[e->RowIndex]->Cells["IDPERSO"]->Value);
	idsup = dataviewdepersonnel->Rows[e->RowIndex]->Cells["PER_IDPERSO"]->Value->ToString();
	nom = dataviewdepersonnel->Rows[e->RowIndex]->Cells["NOM"]->Value->ToString();
	prenom = dataviewdepersonnel->Rows[e->RowIndex]->Cells["PRENOM"]->Value->ToString();
	idadresse = Convert::ToInt32(dataviewdepersonnel->Rows[e->RowIndex]->Cells["IDADR"]->Value);
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "SELECT * FROM projetpoo.ADRESSES WHERE IDADR=" + idadresse + " ;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	NUMRUE = myreader->GetString(1);
	ville = myreader->GetString(2);
	CP = myreader->GetString(3);
	myreader->Close();
	this->Controls->Clear();
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->supprpersonnelButton);
	this->Controls->Add(this->BoxDEpersonnel);
	this->Controls->Add(this->dataviewdepersonnel);
}

private: System::Void dataviewUPclient_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->Controls->Clear();
	this->NomClient2->Text = "";
	this->PrenomClient2->Text = "";
	this->Controls->Add(this->Rechercheclient);
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->dataviewUPclient);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->dataview);
	id = Convert::ToInt32(dataviewUPclient->Rows[e->RowIndex]->Cells["NUMCLIENT"]->Value);
	nom = dataviewUPclient->Rows[e->RowIndex]->Cells["NOM"]->Value->ToString();
	prenom = dataviewUPclient->Rows[e->RowIndex]->Cells["PRENOM"]->Value->ToString();
	anniv = dataviewUPclient->Rows[e->RowIndex]->Cells["BIRTHDATE"]->Value->ToString();
	NomClient->Text = nom;
	PrenomClient->Text = prenom;
	AnnivClient->Text = anniv;
}

private: System::Void dataviewREclient_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->Controls->Clear();
	nom = dataviewREclient->Rows[e->RowIndex]->Cells["NOM"]->Value->ToString();
	prenom = dataviewREclient->Rows[e->RowIndex]->Cells["PRENOM"]->Value->ToString();
	anniv = dataviewREclient->Rows[e->RowIndex]->Cells["BIRTHDATE"]->Value->ToString();
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->TransitionClientCommande);
	this->Controls->Add(this->BoxREclient);
	this->Controls->Add(this->dataviewREclient);
}

private: System::Void dataview_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	id = Convert::ToInt32(dataview->Rows[e->RowIndex]->Cells["IDPERSO"]->Value);
	idsup = dataview->Rows[e->RowIndex]->Cells["PER_IDPERSO"]->Value->ToString();
	nom = dataview->Rows[e->RowIndex]->Cells["NOM"]->Value->ToString();
	prenom = dataview->Rows[e->RowIndex]->Cells["PRENOM"]->Value->ToString();
	idadresse = Convert::ToInt32(dataview->Rows[e->RowIndex]->Cells["IDADR"]->Value);
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "SELECT * FROM projetpoo.ADRESSES WHERE IDADR=" + idadresse + " ;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataReader^ myreader = command->ExecuteReader();
	myreader->Read();
	NUMRUE = myreader->GetString(1);
	ville = myreader->GetString(2);
	CP = myreader->GetString(3);
	myreader->Close();
	this->Controls->Clear();
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->Bupdatepersonnel);
	this->Controls->Add(this->dataview);
	this->NomPersonnel->Text = nom;
	this->PrenomPersonnel->Text = prenom;
	this->NUMRUEPersonnel->Text = NUMRUE;
	this->VillePersonnel->Text = ville;
	this->CPPersonnel->Text = CP;
	this->IDSUP_Personnel->Text = idsup;
}
private: System::Void dataviewcouleur_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	idcouleur = Convert::ToInt32(dataviewcouleur->Rows[e->RowIndex]->Cells["IDCOULEUR"]->Value);
	couleur = dataviewcouleur->Rows[e->RowIndex]->Cells["NOMCOULEUR"]->Value->ToString();
	CouleurArticleCR->Text = couleur;
}
private: System::Void dataviewnature_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	idnature = Convert::ToInt32(dataviewnature->Rows[e->RowIndex]->Cells["IDNATURE"]->Value);
	nature = dataviewnature->Rows[e->RowIndex]->Cells["NOMNATURE"]->Value->ToString();
	NatureArticleCR->Text = nature;
}
private: System::Void dataviewUpstock_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	idarticle = dataviewUpstock->Rows[e->RowIndex]->Cells["ARTREF"]->Value->ToString();
	desi = dataviewUpstock->Rows[e->RowIndex]->Cells["DESIGNATION"]->Value->ToString();
	quant = dataviewUpstock->Rows[e->RowIndex]->Cells["QUANTDISPO"]->Value->ToString();
	seuil = dataviewUpstock->Rows[e->RowIndex]->Cells["SEUILAPPRO"]->Value->ToString();
	prixach = dataviewUpstock->Rows[e->RowIndex]->Cells["PRIXACHAT"]->Value->ToString();
	ht = dataviewUpstock->Rows[e->RowIndex]->Cells["PRIXHT"]->Value->ToString();
	tva = Convert::ToInt32(dataviewUpstock->Rows[e->RowIndex]->Cells["TVA"]->Value);
	this->Controls->Clear();
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BOXupS);
	this->Controls->Add(this->dataviewUpstock);
	this->DesignationArticle->Text = desi;
	this->QuantiteArticle->Text = quant;
	this->SeuilArticle->Text = seuil;
	this->PrixAchatArticle->Text = Convert::ToString(prixach);
	this->PrixHTArticle->Text = Convert::ToString(ht);
	this->TVAArticle->Text = Convert::ToString(tva);
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySql::Data::MySqlClient::MySqlConnection(constring);
	conDataBase->Open();
	String^ cmdclient = "	UPDATE projetpoo.ARTICLE SET DESIGNATION = '" + desi + "', QUANTDISPO = " + quant + ", SEUILAPPRO = " + seuil + ", PRIXACHAT = " + prixach + ", PRIXHT = " + ht + ", TVA = " + tva + " WHERE ARTREF="+idarticle+";";
	MySqlCommand^ command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	MySqlDataAdapter^ myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	DataTable^ DS = gcnew DataTable();
	myReader->Fill(DS);
	conDataBase->Close();
}


/*---------------------------------------------------------------------------------------------------------------------------------------------


////////////////////////////////////////////////	Rangement MenuItemClick		///////////////////////////////////////////////////////////////
													
													
													
---------------------------------------------------------------------------------------------------------------------------------------------*/
private: System::Void accueilToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Accueil";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
}
private: System::Void AjouterunclientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Ajouter un client";
	this->Controls->Add(this->boxCRclient);
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->dataview);
}
private: System::Void actualiserUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour un client";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->dataviewUPclient);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPclient);
	this->Controls->Add(this->dataview);
}
private: System::Void lireLesDonneesClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->PrenomClient3->Text = "";
	this->NomClient3->Text = "";
	this->dataview->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->selectedonglet->Text = "Lire les donnees d'un client";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREclient);
	this->Controls->Add(this->dataviewREclient);
}
private: System::Void ajouterUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Ajouter un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->boxCRpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourLesDonneesDunPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	NomPersonnel->Text = "";
	PrenomPersonnel->Text = "";
	NUMRUEPersonnel->Text = "";
	VillePersonnel->Text = "";
	CPPersonnel->Text = "";
	IDSUP_Personnel->Text = "";
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void lireLesDonneesDunPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Lire les donnees d'un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Supprimer un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEpersonnel);
	this->Controls->Add(this->dataviewdepersonnel);
}
private: System::Void passerUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->PrenomClient3->Text = "";
	this->NomClient3->Text = "";
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Passer une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREclient);
	this->Controls->Add(this->dataviewREclient);
}
private: System::Void mettreaJourUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void visualiserUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Lire une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREstock);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Supprimer une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void ajouterUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Ajouter un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxCRstock);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPstock);
	this->Controls->Add(this->dataviewUpstock);
}
private: System::Void visualiserLesDonneesDunArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Lire les donnees d'un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREstock);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Supprimer un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEstock);
	this->Controls->Add(this->dataview);
}
private: System::Void statistiquesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->dataviewUPclient->DataSource = nullptr;
	this->dataviewREclient->DataSource = nullptr;
	this->dataviewdepersonnel->DataSource = nullptr;
	this->selectedonglet->Text = "Visualisation des statistiques";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	//this->Controls->Add(this->);
	this->Controls->Add(this->dataview);
}

/*---------------------------------------------------------------------------------------------------------------------------------------------


////////////////////////////////////////////////	Rangement buttonClick		///////////////////////////////////////////////////////////////



---------------------------------------------------------------------------------------------------------------------------------------------*/


private: System::Void savecreateclientB_Click(System::Object^ sender, System::EventArgs^ e) {
	obj->create(NomClient->Text, PrenomClient->Text, AnnivClient->Text, NUMRUE_fact_Client->Text, VILLE_fact_Client->Text, CP_fact_Client->Text, NUMRUE_livr_Client->Text, Ville_livr_Client->Text, CP_livr_Client->Text);
}

private: System::Void ajoutAdresseLivr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySql::Data::MySqlClient::MySqlConnection(constring);
	conDataBase->Open();
	String^ cmdclient = "INSERT INTO projetpoo.ADRESSES (NUM_ET_RUE, VILLE, CP) VALUES('" + NUMRUEClient->Text + "','" + VILLEClient->Text + "','" + CPClient->Text + "');";
	MySqlCommand^ command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	MySqlDataAdapter^ myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	DataTable^ DS = gcnew DataTable();
	myReader->Fill(DS);

	String^ cmdid = "select IDADR from projetpoo.ADRESSES where NUM_ET_RUE= '" + NUMRUEClient->Text + "' and VILLE = '" + VILLEClient->Text + "' and CP='" + CPClient->Text + "';";
	MySqlCommand^ commandid = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdid, conDataBase);
	MySqlDataReader^ myreader = commandid->ExecuteReader();
	myreader->Read();
	idadresse = myreader->GetInt32(0);
	myreader->Close();

	cmdclient = "insert into projetpoo.EST_LIVRE_A(NUMCLIENT,IDADR) values (" + id + "," + idadresse + ");";
	command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	myReader->Fill(DS);
	conDataBase->Close();
}
private: System::Void ajoutAdresseFact_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySql::Data::MySqlClient::MySqlConnection(constring);
	conDataBase->Open();

	String^ cmdclient = "INSERT INTO projetpoo.ADRESSES (NUM_ET_RUE, VILLE, CP) VALUES('" + NUMRUEClient->Text + "','" + VILLEClient->Text + "','" + CPClient->Text + "');";
	MySqlCommand^ command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	MySqlDataAdapter^ myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	DataTable^ DS = gcnew DataTable();
	myReader->Fill(DS);

	String^ cmdid = "select IDADR from projetpoo.ADRESSES where NUM_ET_RUE= '" + NUMRUEClient2->Text + "' and VILLE = '" + VILLEClient2->Text + "' and CP='" + CPClient2->Text + "';";
	MySqlCommand^ commandid = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdid, conDataBase);
	MySqlDataReader^ myreader = commandid->ExecuteReader();
	myreader->Read();
	idadresse = myreader->GetInt32(0);
	myreader->Close();

	cmdclient = "insert into projetpoo.A_PAYE_A(NUMCLIENT,IDADR) values (" + id + "," + idadresse + ");";
	command = gcnew MySql::Data::MySqlClient::MySqlCommand(cmdclient, conDataBase);
	myReader = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(command);
	myReader->Fill(DS);
	conDataBase->Close();
}
private: System::Void voirclientUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "SELECT * FROM projetpoo.CLIENT WHERE NOM LIKE '%" + NomClient2->Text + "%' AND PRENOM LIKE '%" + PrenomClient2->Text + "%' ;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataviewUPclient->DataSource = source1;
	myAdapter->Update(DT);
}


private: System::Void UpdateclientButton_Click(System::Object^ sender, System::EventArgs^ e) {

	obj->update(NomClient->Text, PrenomClient->Text, AnnivClient->Text, id);
}
private: System::Void voirclientRead_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "SELECT * FROM projetpoo.CLIENT WHERE NOM LIKE '%" + NomClient3->Text + "%' AND PRENOM LIKE '%" + PrenomClient3->Text + "%' ;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataviewREclient->DataSource = source1;
	myAdapter->Update(DT);
}
private: System::Void CreatePersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	objp->create(textBox5->Text, textBox3->Text, textBox6->Text, textBox7->Text, textBox45->Text, textBox46->Text);
}
private: System::Void UpdatePersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	objp->update(NomPersonnel->Text, PrenomPersonnel->Text, NUMRUEPersonnel->Text, VillePersonnel->Text, CPPersonnel->Text, id, IDSUP_Personnel->Text);
}
private: System::Void ReadPersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "SELECT * FROM projetpoo.PERSONNEL WHERE NOM LIKE '%" + textBox12->Text + "%' AND PRENOM LIKE '%" + textBox11->Text + "%' ;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataview->DataSource = source1;
	myAdapter->Update(DT);
}
private: System::Void DeletePersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "SELECT * FROM projetpoo.PERSONNEL WHERE NOM LIKE '%" + textBox12->Text + "%' AND PRENOM LIKE '%" + textBox11->Text + "%' ;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataviewdepersonnel->DataSource = source1;
	myAdapter->Update(DT);
}
private: System::Void TransitionClientCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->selectedonglet->Text = "Passer une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxCRcommande);
}
private: System::Void UpdatePersonnelButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	objp->suppr(id);
}

private: System::Void NatureArticleCR_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->dataviewnature->DataSource = nullptr;
	nature = NatureArticleCR->Text;
	this->Controls->Remove(dataviewcouleur);
	this->Controls->Remove(dataview);
	this->Controls->Add(dataviewnature);
	this->Controls->Add(dataview);
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "select * from projetpoo.NATURE where NOMNATURE like '%"+nature+"%';";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataviewnature->DataSource = source1;
	myAdapter->Update(DT);
}
private: System::Void CouleurArticleCR_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->dataviewcouleur->DataSource = nullptr;
	this->Controls->Remove(dataviewnature);
	this->Controls->Remove(dataview);
	this->Controls->Add(dataviewcouleur);
	this->Controls->Add(dataview);
	couleur = CouleurArticleCR->Text;
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "select * from projetpoo.COULEUR where NOMCOULEUR like '%" + couleur + "%';";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataviewcouleur->DataSource = source1;
	myAdapter->Update(DT);
	conDataBase->Close();
}
private: System::Void CRarticleButton_Click(System::Object^ sender, System::EventArgs^ e) {
	objs->create(idnature, idcouleur, textBox18->Text->ToString(), textBox19->Text->ToString(), textBox20->Text->ToString(), textBox21->Text->ToString(), textBox22->Text->ToString(), Convert::ToInt32(textBox23->Text));
}
private: System::Void RechercheArticleButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataview->DataSource = nullptr;
	desi = textBox15->Text->ToString();
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "select * from projetpoo.ARTICLE where DESIGNATION like '%" + desi + "%';";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataview->DataSource = source1;
	myAdapter->Update(DT);
	conDataBase->Close();
}
private: System::Void RechercheArticleButton_4_Update_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataviewUpstock->DataSource = nullptr;
	desi = textBox53->Text->ToString();
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "select * from projetpoo.ARTICLE where DESIGNATION like '%" + desi + "%';";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataviewUpstock->DataSource = source1;
	myAdapter->Update(DT);
	conDataBase->Close();
}
private: System::Void ArticleButtonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	objs->update(DesignationArticle->Text->ToString(), QuantiteArticle->Text->ToString(), SeuilArticle->Text->ToString(), PrixAchatArticle->Text->ToString(), PrixHTArticle->Text->ToString(), Convert::ToInt32(TVAArticle->Text), idarticle);
}
};
}