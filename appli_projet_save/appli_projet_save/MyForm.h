#pragma once

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


	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
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




	private: System::ComponentModel::IContainer^ components;







	protected:













	protected:

	private:
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
			this->savecreateclientB = (gcnew System::Windows::Forms::Button());
			this->informationadresse = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
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
			this->BoxDEcommande = (gcnew System::Windows::Forms::GroupBox());
			this->BoxDEstock = (gcnew System::Windows::Forms::GroupBox());
			this->BoxCRstock = (gcnew System::Windows::Forms::GroupBox());
			this->BoxREpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->BoxREstock = (gcnew System::Windows::Forms::GroupBox());
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
			this->BoxUPcommande = (gcnew System::Windows::Forms::GroupBox());
			this->BoxUPclient = (gcnew System::Windows::Forms::GroupBox());
			this->BoxDEclient = (gcnew System::Windows::Forms::GroupBox());
			this->BoxUPpersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->boxCRclient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->BeginInit();
			this->boxCRpersonnel->SuspendLayout();
			this->BoxREclient->SuspendLayout();
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
			this->boxCRclient->Controls->Add(this->savecreateclientB);
			this->boxCRclient->Controls->Add(this->informationadresse);
			this->boxCRclient->Controls->Add(this->richTextBox2);
			this->boxCRclient->Controls->Add(this->richTextBox1);
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
			// savecreateclientB
			// 
			this->savecreateclientB->Location = System::Drawing::Point(145, 373);
			this->savecreateclientB->Name = L"savecreateclientB";
			this->savecreateclientB->Size = System::Drawing::Size(75, 23);
			this->savecreateclientB->TabIndex = 12;
			this->savecreateclientB->Text = L"Enregistrer";
			this->savecreateclientB->UseVisualStyleBackColor = true;
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
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(187, 268);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(224, 91);
			this->richTextBox2->TabIndex = 10;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(187, 171);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(224, 91);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
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
			this->createclientadrlivL->Location = System::Drawing::Point(11, 284);
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
			this->BoxDEpersonnel->Location = System::Drawing::Point(0, 29);
			this->BoxDEpersonnel->Name = L"BoxDEpersonnel";
			this->BoxDEpersonnel->Size = System::Drawing::Size(437, 401);
			this->BoxDEpersonnel->TabIndex = 7;
			this->BoxDEpersonnel->TabStop = false;
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
			this->BoxCRstock->Location = System::Drawing::Point(0, 29);
			this->BoxCRstock->Name = L"BoxCRstock";
			this->BoxCRstock->Size = System::Drawing::Size(437, 401);
			this->BoxCRstock->TabIndex = 9;
			this->BoxCRstock->TabStop = false;
			// 
			// BoxREpersonnel
			// 
			this->BoxREpersonnel->Location = System::Drawing::Point(0, 29);
			this->BoxREpersonnel->Name = L"BoxREpersonnel";
			this->BoxREpersonnel->Size = System::Drawing::Size(437, 401);
			this->BoxREpersonnel->TabIndex = 9;
			this->BoxREpersonnel->TabStop = false;
			// 
			// BoxREstock
			// 
			this->BoxREstock->Location = System::Drawing::Point(0, 29);
			this->BoxREstock->Name = L"BoxREstock";
			this->BoxREstock->Size = System::Drawing::Size(437, 401);
			this->BoxREstock->TabIndex = 9;
			this->BoxREstock->TabStop = false;
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
			this->button2->Location = System::Drawing::Point(140, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(47, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(182, 135);
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
			this->BoxREcommande->Location = System::Drawing::Point(0, 29);
			this->BoxREcommande->Name = L"BoxREcommande";
			this->BoxREcommande->Size = System::Drawing::Size(437, 401);
			this->BoxREcommande->TabIndex = 9;
			this->BoxREcommande->TabStop = false;
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
			this->BoxUPclient->Location = System::Drawing::Point(0, 29);
			this->BoxUPclient->Name = L"BoxUPclient";
			this->BoxUPclient->Size = System::Drawing::Size(437, 401);
			this->BoxUPclient->TabIndex = 9;
			this->BoxUPclient->TabStop = false;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 431);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->BoxREpersonnel);
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
			this->BoxREclient->ResumeLayout(false);
			this->BoxREclient->PerformLayout();
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
	this->Controls->Add(this->menuStrip1);
}
private: System::Void AjouterunclientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->boxCRclient);
	this->Controls->Add(this->dataview);
}
private: System::Void actualiserUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPclient);
	this->Controls->Add(this->dataview);
}
private: System::Void lireLesDonneesClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREclient);
	this->Controls->Add(this->dataview);
}
private: System::Void ajouterUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->boxCRpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourLesDonneesDunPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void lireLesDonneesDunPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEpersonnel);
	this->Controls->Add(this->dataview);
}
private: System::Void passerUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxCRcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void visualiserUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREstock);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEcommande);
	this->Controls->Add(this->dataview);
}
private: System::Void ajouterUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxCRstock);
	this->Controls->Add(this->dataview);
}
private: System::Void mettreaJourUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxUPstock);
	this->Controls->Add(this->dataview);
}
private: System::Void visualiserLesDonneesDunArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxREstock);
	this->Controls->Add(this->dataview);
}
private: System::Void supprimerUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->BoxDEstock);
	this->Controls->Add(this->dataview);
}
private: System::Void statistiquesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	//this->Controls->Add(this->);
	this->Controls->Add(this->dataview);
}
};
}