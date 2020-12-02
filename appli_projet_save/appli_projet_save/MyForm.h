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
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettreaJourUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visualiserLesDonneesDunArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ accueilToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ boxCRclient;
	private: System::Windows::Forms::Label^ createclientadrlivL;

	private: System::Windows::Forms::Label^ createclientadrfacL;

	private: System::Windows::Forms::Label^ createclientbirthL;

	private: System::Windows::Forms::Label^ createclientnomL;
	private: System::Windows::Forms::Label^ createclientprenomL;




	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::Button^ button1;
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
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ button3;
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
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ selectedonglet;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::DataGridView^ dataviewUPclient;
private: System::Windows::Forms::GroupBox^ Rechercheclient;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox31;







	private: System::ComponentModel::IContainer^ components;




private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox33;



private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;












	protected:













	protected:

	private:
		stratClient^ obj = gcnew stratClient;
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
			this->supprimerUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettreaJourUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualiserLesDonneesDunArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boxCRclient = (gcnew System::Windows::Forms::GroupBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->savecreateclientB = (gcnew System::Windows::Forms::Button());
			this->informationadresse = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->createclientadrlivL = (gcnew System::Windows::Forms::Label());
			this->createclientadrfacL = (gcnew System::Windows::Forms::Label());
			this->createclientbirthL = (gcnew System::Windows::Forms::Label());
			this->createclientnomL = (gcnew System::Windows::Forms::Label());
			this->createclientprenomL = (gcnew System::Windows::Forms::Label());
			this->dataview = (gcnew System::Windows::Forms::DataGridView());
			this->boxCRpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->BoxDEpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->BoxDEcommande = (gcnew System::Windows::Forms::GroupBox());
			this->BoxDEstock = (gcnew System::Windows::Forms::GroupBox());
			this->BoxCRstock = (gcnew System::Windows::Forms::GroupBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->BoxREpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->BoxREstock = (gcnew System::Windows::Forms::GroupBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->BoxREclient = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->BoxUPstock = (gcnew System::Windows::Forms::GroupBox());
			this->BoxREcommande = (gcnew System::Windows::Forms::GroupBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->BoxUPcommande = (gcnew System::Windows::Forms::GroupBox());
			this->BoxUPclient = (gcnew System::Windows::Forms::GroupBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Rechercheclient = (gcnew System::Windows::Forms::GroupBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->BoxDEclient = (gcnew System::Windows::Forms::GroupBox());
			this->BoxUPpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->selectedonglet = (gcnew System::Windows::Forms::Label());
			this->dataviewUPclient = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			this->boxCRclient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->BeginInit();
			this->boxCRpersonnel->SuspendLayout();
			this->BoxDEpersonnel->SuspendLayout();
			this->BoxCRstock->SuspendLayout();
			this->BoxREpersonnel->SuspendLayout();
			this->BoxREstock->SuspendLayout();
			this->BoxREclient->SuspendLayout();
			this->BoxREcommande->SuspendLayout();
			this->BoxUPclient->SuspendLayout();
			this->Rechercheclient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewUPclient))->BeginInit();
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(896, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accueilToolStripMenuItem
			// 
			this->accueilToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->accueilToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Gray;
			this->accueilToolStripMenuItem->Name = L"accueilToolStripMenuItem";
			this->accueilToolStripMenuItem->Size = System::Drawing::Size(70, 24);
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
			this->clientsToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->clientsToolStripMenuItem->Text = L"Clients";
			// 
			// AjouterunclientToolStripMenuItem
			// 
			this->AjouterunclientToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->AjouterunclientToolStripMenuItem->Name = L"AjouterunclientToolStripMenuItem";
			this->AjouterunclientToolStripMenuItem->Size = System::Drawing::Size(293, 24);
			this->AjouterunclientToolStripMenuItem->Text = L"Ajouter un client";
			this->AjouterunclientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AjouterunclientToolStripMenuItem_Click);
			// 
			// actualiserUnClientToolStripMenuItem
			// 
			this->actualiserUnClientToolStripMenuItem->Name = L"actualiserUnClientToolStripMenuItem";
			this->actualiserUnClientToolStripMenuItem->Size = System::Drawing::Size(293, 24);
			this->actualiserUnClientToolStripMenuItem->Text = L"Mettre a jour les donnees client";
			this->actualiserUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::actualiserUnClientToolStripMenuItem_Click);
			// 
			// lireLesDonneesClientToolStripMenuItem
			// 
			this->lireLesDonneesClientToolStripMenuItem->Name = L"lireLesDonneesClientToolStripMenuItem";
			this->lireLesDonneesClientToolStripMenuItem->Size = System::Drawing::Size(293, 24);
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
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// ajouterUnPersonnelToolStripMenuItem
			// 
			this->ajouterUnPersonnelToolStripMenuItem->Name = L"ajouterUnPersonnelToolStripMenuItem";
			this->ajouterUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->ajouterUnPersonnelToolStripMenuItem->Text = L"Ajouter un personnel";
			this->ajouterUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ajouterUnPersonnelToolStripMenuItem_Click);
			// 
			// mettreaJourLesDonneesDunPersonnelToolStripMenuItem
			// 
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Name = L"mettreaJourLesDonneesDunPersonnelToolStripMenuItem";
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Text = L"Mettre a jour les donnees d\'un personnel";
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mettreaJourLesDonneesDunPersonnelToolStripMenuItem_Click);
			// 
			// lireLesDonneesDunPersonnelToolStripMenuItem
			// 
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Name = L"lireLesDonneesDunPersonnelToolStripMenuItem";
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Text = L"Lire les donnees d\'un personnel";
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lireLesDonneesDunPersonnelToolStripMenuItem_Click);
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			this->supprimerUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerUnPersonnelToolStripMenuItem_Click);
			// 
			// commandesToolStripMenuItem
			// 
			this->commandesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->passerUneCommandeToolStripMenuItem,
					this->mettreaJourUneCommandeToolStripMenuItem, this->visualiserUneCommandeToolStripMenuItem, this->supprimerUneCommandeToolStripMenuItem
			});
			this->commandesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->commandesToolStripMenuItem->Name = L"commandesToolStripMenuItem";
			this->commandesToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->commandesToolStripMenuItem->Text = L"Commandes";
			// 
			// passerUneCommandeToolStripMenuItem
			// 
			this->passerUneCommandeToolStripMenuItem->Name = L"passerUneCommandeToolStripMenuItem";
			this->passerUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->passerUneCommandeToolStripMenuItem->Text = L"Passer une commande";
			this->passerUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::passerUneCommandeToolStripMenuItem_Click);
			// 
			// mettreaJourUneCommandeToolStripMenuItem
			// 
			this->mettreaJourUneCommandeToolStripMenuItem->Name = L"mettreaJourUneCommandeToolStripMenuItem";
			this->mettreaJourUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->mettreaJourUneCommandeToolStripMenuItem->Text = L"Mettre a jour une commande";
			this->mettreaJourUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mettreaJourUneCommandeToolStripMenuItem_Click);
			// 
			// visualiserUneCommandeToolStripMenuItem
			// 
			this->visualiserUneCommandeToolStripMenuItem->Name = L"visualiserUneCommandeToolStripMenuItem";
			this->visualiserUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->visualiserUneCommandeToolStripMenuItem->Text = L"Visualiser une commande";
			this->visualiserUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualiserUneCommandeToolStripMenuItem_Click);
			// 
			// supprimerUneCommandeToolStripMenuItem
			// 
			this->supprimerUneCommandeToolStripMenuItem->Name = L"supprimerUneCommandeToolStripMenuItem";
			this->supprimerUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->supprimerUneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
			this->supprimerUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerUneCommandeToolStripMenuItem_Click);
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ajouterUnArticleToolStripMenuItem,
					this->mettreaJourUnArticleToolStripMenuItem, this->visualiserLesDonneesDunArticleToolStripMenuItem, this->supprimerUnArticleToolStripMenuItem
			});
			this->stockToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// ajouterUnArticleToolStripMenuItem
			// 
			this->ajouterUnArticleToolStripMenuItem->Name = L"ajouterUnArticleToolStripMenuItem";
			this->ajouterUnArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->ajouterUnArticleToolStripMenuItem->Text = L"Ajouter un article";
			this->ajouterUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ajouterUnArticleToolStripMenuItem_Click);
			// 
			// mettreaJourUnArticleToolStripMenuItem
			// 
			this->mettreaJourUnArticleToolStripMenuItem->Name = L"mettreaJourUnArticleToolStripMenuItem";
			this->mettreaJourUnArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->mettreaJourUnArticleToolStripMenuItem->Text = L"Mettre a jour un article";
			this->mettreaJourUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mettreaJourUnArticleToolStripMenuItem_Click);
			// 
			// visualiserLesDonneesDunArticleToolStripMenuItem
			// 
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Name = L"visualiserLesDonneesDunArticleToolStripMenuItem";
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Text = L"Visualiser les donnees d\'un article";
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualiserLesDonneesDunArticleToolStripMenuItem_Click);
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			this->supprimerUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerUnArticleToolStripMenuItem_Click);
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			this->statistiquesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::statistiquesToolStripMenuItem_Click);
			// 
			// boxCRclient
			// 
			this->boxCRclient->Controls->Add(this->textBox42);
			this->boxCRclient->Controls->Add(this->textBox43);
			this->boxCRclient->Controls->Add(this->textBox44);
			this->boxCRclient->Controls->Add(this->textBox35);
			this->boxCRclient->Controls->Add(this->textBox34);
			this->boxCRclient->Controls->Add(this->textBox33);
			this->boxCRclient->Controls->Add(this->savecreateclientB);
			this->boxCRclient->Controls->Add(this->informationadresse);
			this->boxCRclient->Controls->Add(this->textBox4);
			this->boxCRclient->Controls->Add(this->textBox2);
			this->boxCRclient->Controls->Add(this->textBox1);
			this->boxCRclient->Controls->Add(this->createclientadrlivL);
			this->boxCRclient->Controls->Add(this->createclientadrfacL);
			this->boxCRclient->Controls->Add(this->createclientbirthL);
			this->boxCRclient->Controls->Add(this->createclientnomL);
			this->boxCRclient->Controls->Add(this->createclientprenomL);
			this->boxCRclient->Location = System::Drawing::Point(0, 29);
			this->boxCRclient->Margin = System::Windows::Forms::Padding(2);
			this->boxCRclient->Name = L"boxCRclient";
			this->boxCRclient->Padding = System::Windows::Forms::Padding(2);
			this->boxCRclient->Size = System::Drawing::Size(437, 401);
			this->boxCRclient->TabIndex = 6;
			this->boxCRclient->TabStop = false;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(349, 211);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(62, 20);
			this->textBox42->TabIndex = 23;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(272, 211);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(71, 20);
			this->textBox43->TabIndex = 22;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(187, 211);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(79, 20);
			this->textBox44->TabIndex = 21;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(349, 171);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(62, 20);
			this->textBox35->TabIndex = 15;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(272, 171);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(71, 20);
			this->textBox34->TabIndex = 14;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(187, 171);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(79, 20);
			this->textBox33->TabIndex = 13;
			// 
			// savecreateclientB
			// 
			this->savecreateclientB->Location = System::Drawing::Point(145, 373);
			this->savecreateclientB->Name = L"savecreateclientB";
			this->savecreateclientB->Size = System::Drawing::Size(75, 23);
			this->savecreateclientB->TabIndex = 12;
			this->savecreateclientB->Text = L"Enregistrer";
			this->savecreateclientB->UseVisualStyleBackColor = true;
			this->savecreateclientB->Click += gcnew System::EventHandler(this, &MyForm::savecreateclientB_Click);
			// 
			// informationadresse
			// 
			this->informationadresse->AutoSize = true;
			this->informationadresse->ForeColor = System::Drawing::Color::DimGray;
			this->informationadresse->Location = System::Drawing::Point(11, 143);
			this->informationadresse->Name = L"informationadresse";
			this->informationadresse->Size = System::Drawing::Size(344, 13);
			this->informationadresse->TabIndex = 11;
			this->informationadresse->Text = L"Indiquer une adresse par ligne sous le format (Adresse,Ville,code postal)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(187, 62);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(224, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(187, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(224, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 20);
			this->textBox1->TabIndex = 5;
			// 
			// createclientadrlivL
			// 
			this->createclientadrlivL->AutoSize = true;
			this->createclientadrlivL->Location = System::Drawing::Point(11, 214);
			this->createclientadrlivL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->createclientadrlivL->Name = L"createclientadrlivL";
			this->createclientadrlivL->Size = System::Drawing::Size(106, 13);
			this->createclientadrlivL->TabIndex = 4;
			this->createclientadrlivL->Text = L"Adresses de livraison";
			// 
			// createclientadrfacL
			// 
			this->createclientadrfacL->AutoSize = true;
			this->createclientadrfacL->Location = System::Drawing::Point(11, 174);
			this->createclientadrfacL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->createclientadrfacL->Name = L"createclientadrfacL";
			this->createclientadrfacL->Size = System::Drawing::Size(118, 13);
			this->createclientadrfacL->TabIndex = 3;
			this->createclientadrfacL->Text = L"Adresses de facturation";
			// 
			// createclientbirthL
			// 
			this->createclientbirthL->AutoSize = true;
			this->createclientbirthL->Location = System::Drawing::Point(11, 105);
			this->createclientbirthL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->createclientbirthL->Name = L"createclientbirthL";
			this->createclientbirthL->Size = System::Drawing::Size(171, 13);
			this->createclientbirthL->TabIndex = 2;
			this->createclientbirthL->Text = L"Date de naissance (AAAA/MM/JJ)";
			// 
			// createclientnomL
			// 
			this->createclientnomL->AutoSize = true;
			this->createclientnomL->Location = System::Drawing::Point(11, 65);
			this->createclientnomL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->createclientnomL->Name = L"createclientnomL";
			this->createclientnomL->Size = System::Drawing::Size(72, 13);
			this->createclientnomL->TabIndex = 1;
			this->createclientnomL->Text = L"Nom du client";
			// 
			// createclientprenomL
			// 
			this->createclientprenomL->AutoSize = true;
			this->createclientprenomL->Location = System::Drawing::Point(11, 25);
			this->createclientprenomL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->createclientprenomL->Name = L"createclientprenomL";
			this->createclientprenomL->Size = System::Drawing::Size(86, 13);
			this->createclientprenomL->TabIndex = 0;
			this->createclientprenomL->Text = L"Prenom du client";
			// 
			// dataview
			// 
			this->dataview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataview->Location = System::Drawing::Point(454, 48);
			this->dataview->Name = L"dataview";
			this->dataview->Size = System::Drawing::Size(426, 369);
			this->dataview->TabIndex = 6;
			// 
			// boxCRpersonnel
			// 
			this->boxCRpersonnel->Controls->Add(this->button1);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(145, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enregistrer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Adresse (Adresse,Ville,code postal)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date d\'embauche (AAAA/MM/JJ)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nom de l\'employe";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Prenom de l\'employe";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(187, 182);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(224, 20);
			this->textBox7->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(187, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(224, 20);
			this->textBox6->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(187, 102);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(224, 20);
			this->textBox5->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 62);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(224, 20);
			this->textBox3->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// BoxCRcommande
			// 
			this->BoxCRcommande->Location = System::Drawing::Point(0, 29);
			this->BoxCRcommande->Name = L"BoxCRcommande";
			this->BoxCRcommande->Size = System::Drawing::Size(437, 401);
			this->BoxCRcommande->TabIndex = 10;
			this->BoxCRcommande->TabStop = false;
			// 
			// BoxDEpersonnel
			// 
			this->BoxDEpersonnel->Controls->Add(this->textBox25);
			this->BoxDEpersonnel->Controls->Add(this->textBox24);
			this->BoxDEpersonnel->Controls->Add(this->label22);
			this->BoxDEpersonnel->Controls->Add(this->label21);
			this->BoxDEpersonnel->Controls->Add(this->button7);
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
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 4;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(176, 56);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 3;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(41, 112);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Nom du personnel";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(41, 63);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(107, 13);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Prenom du personnel";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(176, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Rechercher";
			this->button7->UseVisualStyleBackColor = true;
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
			this->BoxCRstock->Controls->Add(this->textBox17);
			this->BoxCRstock->Controls->Add(this->label20);
			this->BoxCRstock->Controls->Add(this->label19);
			this->BoxCRstock->Controls->Add(this->label18);
			this->BoxCRstock->Controls->Add(this->label17);
			this->BoxCRstock->Controls->Add(this->label16);
			this->BoxCRstock->Controls->Add(this->label15);
			this->BoxCRstock->Controls->Add(this->label14);
			this->BoxCRstock->Controls->Add(this->textBox16);
			this->BoxCRstock->Controls->Add(this->label13);
			this->BoxCRstock->Controls->Add(this->button6);
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
			this->textBox23->Size = System::Drawing::Size(225, 20);
			this->textBox23->TabIndex = 16;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(165, 230);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(225, 20);
			this->textBox22->TabIndex = 15;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(165, 194);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(225, 20);
			this->textBox21->TabIndex = 14;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(165, 160);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(225, 20);
			this->textBox20->TabIndex = 13;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(165, 128);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(225, 20);
			this->textBox19->TabIndex = 12;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(165, 94);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(225, 20);
			this->textBox18->TabIndex = 11;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(165, 63);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(225, 20);
			this->textBox17->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(29, 267);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(28, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"TVA";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(29, 233);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Prix HT";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(29, 197);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Prix d\'achat";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(29, 163);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(130, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Seuil d\'approvisionnement";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(29, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(97, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Quantite disponible";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(29, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Designation";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(29, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Couleur de l\'article";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(165, 32);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(225, 20);
			this->textBox16->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(29, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(89, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Nature de l\'article";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(165, 318);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Enregistrer";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// BoxREpersonnel
			// 
			this->BoxREpersonnel->Controls->Add(this->button3);
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Rechercher";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(35, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Nom du personnel";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(35, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Prenom du personnel";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(160, 114);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 1;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(160, 66);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 0;
			// 
			// BoxREstock
			// 
			this->BoxREstock->Controls->Add(this->textBox15);
			this->BoxREstock->Controls->Add(this->label12);
			this->BoxREstock->Controls->Add(this->button5);
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
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(53, 110);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Reference de l\'article";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(193, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Rechercher";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// BoxREclient
			// 
			this->BoxREclient->Controls->Add(this->button2);
			this->BoxREclient->Controls->Add(this->label7);
			this->BoxREclient->Controls->Add(this->label6);
			this->BoxREclient->Controls->Add(this->label5);
			this->BoxREclient->Controls->Add(this->textBox10);
			this->BoxREclient->Controls->Add(this->textBox9);
			this->BoxREclient->Controls->Add(this->textBox8);
			this->BoxREclient->Location = System::Drawing::Point(0, 29);
			this->BoxREclient->Name = L"BoxREclient";
			this->BoxREclient->Size = System::Drawing::Size(437, 401);
			this->BoxREclient->TabIndex = 9;
			this->BoxREclient->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(182, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Rechercher";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(47, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Date de naissance";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Nom du client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Prenom du client";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(182, 139);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 2;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(182, 94);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 1;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(182, 54);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 0;
			// 
			// BoxUPstock
			// 
			this->BoxUPstock->Location = System::Drawing::Point(0, 29);
			this->BoxUPstock->Name = L"BoxUPstock";
			this->BoxUPstock->Size = System::Drawing::Size(437, 401);
			this->BoxUPstock->TabIndex = 9;
			this->BoxUPstock->TabStop = false;
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
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 4;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(41, 120);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
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
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(41, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
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
			this->BoxUPclient->Controls->Add(this->textBox32);
			this->BoxUPclient->Controls->Add(this->textBox31);
			this->BoxUPclient->Controls->Add(this->label26);
			this->BoxUPclient->Controls->Add(this->label25);
			this->BoxUPclient->Controls->Add(this->button9);
			this->BoxUPclient->Location = System::Drawing::Point(0, 29);
			this->BoxUPclient->Name = L"BoxUPclient";
			this->BoxUPclient->Size = System::Drawing::Size(437, 401);
			this->BoxUPclient->TabIndex = 9;
			this->BoxUPclient->TabStop = false;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(159, 63);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 20);
			this->textBox32->TabIndex = 7;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(159, 20);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 20);
			this->textBox31->TabIndex = 6;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(27, 71);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 5;
			this->label26->Text = L"label26";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(27, 23);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"label25";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(159, 119);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 0;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// Rechercheclient
			// 
			this->Rechercheclient->Controls->Add(this->textBox30);
			this->Rechercheclient->Controls->Add(this->label27);
			this->Rechercheclient->Controls->Add(this->label24);
			this->Rechercheclient->Controls->Add(this->textBox29);
			this->Rechercheclient->Controls->Add(this->textBox28);
			this->Rechercheclient->Controls->Add(this->label23);
			this->Rechercheclient->Controls->Add(this->button8);
			this->Rechercheclient->Controls->Add(this->button11);
			this->Rechercheclient->Controls->Add(this->button10);
			this->Rechercheclient->Controls->Add(this->textBox41);
			this->Rechercheclient->Controls->Add(this->textBox40);
			this->Rechercheclient->Controls->Add(this->textBox39);
			this->Rechercheclient->Controls->Add(this->textBox38);
			this->Rechercheclient->Controls->Add(this->textBox37);
			this->Rechercheclient->Controls->Add(this->textBox36);
			this->Rechercheclient->Controls->Add(this->label29);
			this->Rechercheclient->Controls->Add(this->label28);
			this->Rechercheclient->Location = System::Drawing::Point(18, 12);
			this->Rechercheclient->Name = L"Rechercheclient";
			this->Rechercheclient->Size = System::Drawing::Size(419, 354);
			this->Rechercheclient->TabIndex = 0;
			this->Rechercheclient->TabStop = false;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(147, 134);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 20);
			this->textBox30->TabIndex = 7;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(29, 137);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 6;
			this->label27->Text = L"label27";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(29, 55);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 13);
			this->label24->TabIndex = 4;
			this->label24->Text = L"label24";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(147, 96);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 3;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(147, 52);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 2;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(29, 99);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 1;
			this->label23->Text = L"label23";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(159, 158);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 0;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(159, 298);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 17;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(159, 217);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 16;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(340, 272);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(66, 20);
			this->textBox41->TabIndex = 15;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(340, 191);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(66, 20);
			this->textBox40->TabIndex = 14;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(218, 272);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(116, 20);
			this->textBox39->TabIndex = 13;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(218, 191);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(116, 20);
			this->textBox38->TabIndex = 12;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(112, 272);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(100, 20);
			this->textBox37->TabIndex = 11;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(112, 191);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(100, 20);
			this->textBox36->TabIndex = 10;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(27, 275);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 9;
			this->label29->Text = L"label29";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(27, 194);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 8;
			this->label28->Text = L"label28";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(180, 98);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(8, 20);
			this->textBox27->TabIndex = 3;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(180, 52);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(8, 20);
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
			this->selectedonglet->Location = System::Drawing::Point(544, 0);
			this->selectedonglet->Name = L"selectedonglet";
			this->selectedonglet->Size = System::Drawing::Size(352, 28);
			this->selectedonglet->TabIndex = 8;
			this->selectedonglet->Text = L"Accueil";
			this->selectedonglet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dataviewUPclient
			// 
			this->dataviewUPclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataviewUPclient->Location = System::Drawing::Point(454, 48);
			this->dataviewUPclient->Name = L"dataviewUPclient";
			this->dataviewUPclient->Size = System::Drawing::Size(426, 369);
			this->dataviewUPclient->TabIndex = 9;
			this->dataviewUPclient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataviewUPclient_CellContentClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 431);
			this->Controls->Add(this->selectedonglet);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataviewUPclient);
			this->Location = System::Drawing::Point(12, 42);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Rangetesclients.net";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->boxCRclient->ResumeLayout(false);
			this->boxCRclient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->EndInit();
			this->boxCRpersonnel->ResumeLayout(false);
			this->boxCRpersonnel->PerformLayout();
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
			this->BoxREcommande->ResumeLayout(false);
			this->BoxREcommande->PerformLayout();
			this->BoxUPclient->ResumeLayout(false);
			this->BoxUPclient->PerformLayout();
			this->Rechercheclient->ResumeLayout(false);
			this->Rechercheclient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataviewUPclient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			conDataBase->Open();

			String^ nom, ^ prenom, ^ birthdate;
			nom = textBox1->Text;
			prenom = textBox2->Text;
			birthdate = textBox3->Text;
			String^ queryString = "insert into CLIENT(NOM,PRENOM,BIRTHDATE) values ('" + nom + "," + prenom + "," + birthdate + "); insert into ADRESSES(ADRESSE) values ("; //"INSERT INTO projetdb.articles(id,name,prix) VALUES ( " + Convert::ToInt32(textBox1->Text) + ", '" + textBox2->Text + "', " + Convert::ToInt32(textBox3->Text) + ");";
			MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
			MySqlDataAdapter^ myReader = gcnew MySqlDataAdapter(command);
			DataTable^ DS = gcnew DataTable();
			myReader->Fill(DS);
		}
		private: System::Void OnMouseEnter_button1(System::Object^ sender, EventArgs^ e)
		{
			button1->BackColor = System::Drawing::Color::DodgerBlue; // or Color.Red or whatever you want
			button1->ForeColor = System::Drawing::Color::White;
		}

		private: System::Void OnMouseLeave_button1(System::Object^ sender, EventArgs^ e)
		{
			button1->BackColor = System::Drawing::Color::White; // or Color.Red or whatever you want
			button1->ForeColor = System::Drawing::Color::Black;
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			conDataBase->Open();
			String^ queryString = "select * from projetdb.articles;";
			MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
			MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
			DataTable^ DT = gcnew DataTable();
			myAdapter->Fill(DT);
			BindingSource^ source1 = gcnew BindingSource();
			source1->DataSource = DT;
			dataGridView1->DataSource = source1;
			myAdapter->Update(DT);
		}
		private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			String^ selected = dataGridView1->Rows[e->RowIndex]->Cells["id"]->Value->ToString();
			label4->Text = selected;
			String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			conDataBase->Open();
			String^ queryString = "select * from projetdb.clients where id = " + selected + ";";
			MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
			MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
			DataTable^ DD = gcnew DataTable();
			myAdapter->Fill(DD);
			BindingSource^ source1 = gcnew BindingSource();
			source1->DataSource = DD;
			dataGridView2->DataSource = source1;
			myAdapter->Update(DD);
		}*/

private: System::Void accueilToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource= nullptr;
	this->selectedonglet->Text = "Accueil";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
}
private: System::Void AjouterunclientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Ajouter un client";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->boxCRclient);
	this->textBox36->Hide();
	this->textBox37->Hide();
	this->textBox38->Hide();
	this->textBox39->Hide();
	this->textBox40->Hide();
	this->textBox41->Hide();
	this->Controls->Add(this->dataview);
}
private: System::Void savecreateclientB_Click(System::Object^ sender, System::EventArgs^ e) {
	obj->create(textBox2->Text->ToString(), textBox1->Text->ToString(), textBox4->Text->ToString());
	
	/*array<String^>^ contenufact = this->richTextBox1->Lines;
	int nFact = 0;
	int iFACT = 0;
	for each (String ^ LIGNE in contenufact) {
		nFact++;
	}
	array<array<String^>^>^ tableauFact = gcnew array<array<String^>^>(nFact);
	for each (String ^ LIGNE in contenufact) {
		String^ separator = ",";
		array<String^>^ TableauAdresse = LIGNE->Split(separator->ToCharArray());
		tableauFact[iFACT] = TableauAdresse;
		iFACT++;

	};
	array<String^>^ contenulivr = this->richTextBox2->Lines;
	int nlivr = 0;
	int ilivr = 0;
	for each (String ^ LIGNE in contenulivr) {
		nlivr++;
	}
	array<array<String^>^>^ tableaulivr = gcnew array<array<String^>^>(nlivr);
	for each (String ^ LIGNE in contenulivr) {
		String^ separator = ",";
		array<String^>^ TableauAdresse = LIGNE->Split(separator->ToCharArray());
		tableaulivr[ilivr] = TableauAdresse;
		ilivr++;

	};
	obj->create(tableauFact, tableaulivr, textBox2->Text->ToString(), textBox1->Text->ToString(), textBox4->Text->ToString());*/
	String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	String^ queryString = "select * from projetdb.articles;";
	MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
	MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
	DataTable^ DT = gcnew DataTable();
	myAdapter->Fill(DT);
	BindingSource^ source1 = gcnew BindingSource();
	source1->DataSource = DT;
	dataview->DataSource = source1;
	myAdapter->Update(DT);
}

private: System::Void actualiserUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour un client";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->dataviewUPclient);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPclient);
	this->Controls->Add(this->dataview);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
   String^ constring = L"datasource=192.168.233.132;port=3306;username=TeoMoca;password=Iammoca*76";
   MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
   conDataBase->Open();
   String^ queryString = "SELECT * FROM projetpoo.CLIENT WHERE NOM LIKE '%" + textBox31->Text + "%' AND PRENOM LIKE '%" + textBox32->Text + "%' ;";
   MySqlCommand^ command = gcnew MySqlCommand(queryString, conDataBase);
   MySqlDataAdapter^ myAdapter = gcnew MySqlDataAdapter(command);
   DataTable^ DT = gcnew DataTable();
   myAdapter->Fill(DT);
   BindingSource^ source1 = gcnew BindingSource();
   source1->DataSource = DT;
   dataviewUPclient->DataSource = source1;
   myAdapter->Update(DT);
}
private: System::Void dataviewUPclient_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->textBox32->Hide();
	this->textBox31->Hide();
	this->label26->Hide();
	this->label25->Hide();
	this->button9->Hide();
	this->Controls->Add(this->Rechercheclient);
	this->Controls->Add(this->BoxUPclient);
	String^ nom = dataviewUPclient->Rows[e->RowIndex]->Cells["NOM"]->Value->ToString();
	String^ prenom = dataviewUPclient->Rows[e->RowIndex]->Cells["PRENOM"]->Value->ToString();
	String^ anniv = dataviewUPclient->Rows[e->RowIndex]->Cells["BIRTHDATE"]->Value->ToString();
	textBox28->Text = nom;
	textBox29->Text = prenom;
	textBox30->Text = anniv;
}

private: System::Void lireLesDonneesClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Lire les donnees d'un client";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREclient);
	this->Controls->Add(this->dataview);
}
private: System::Void ajouterUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Ajouter un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->boxCRpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//stratpersonnel::Create()
}
private: System::Void mettreaJourLesDonneesDunPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void lireLesDonneesDunPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Lire les donnees d'un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Supprimer un personnel";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void passerUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Passer une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxCRcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void visualiserUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Lire une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREstock);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Supprimer une commande";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void ajouterUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Ajouter un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxCRstock);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Mettre a jour un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPstock);
	this->Controls->Add(this->dataview);
}
private: System::Void visualiserLesDonneesDunArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Lire les donnees d'un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREstock);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Supprimer un article";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEstock);
	this->Controls->Add(this->dataview);
}
private: System::Void statistiquesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->dataview->DataSource = nullptr;
	this->selectedonglet->Text = "Visualisation des statistiques";
	this->Controls->Add(this->selectedonglet);
	this->Controls->Add(this->menuStrip1);
	//this->Controls->Add(this->);
	this->Controls->Add(this->dataview);
}

};
}