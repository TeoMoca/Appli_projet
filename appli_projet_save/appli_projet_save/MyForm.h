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
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
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






	protected:













	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accueilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
			this->boxCRclient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->BeginInit();
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
			this->accueilToolStripMenuItem->Name = L"accueilToolStripMenuItem";
			this->accueilToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->accueilToolStripMenuItem->Text = L"Accueil";
			this->accueilToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::accueilToolStripMenuItem_Click_1);
			// 
			// clientsToolStripMenuItem
			// 
			this->clientsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createToolStripMenuItem,
					this->actualiserUnClientToolStripMenuItem, this->lireLesDonneesClientToolStripMenuItem
			});
			this->clientsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->clientsToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->clientsToolStripMenuItem->Name = L"clientsToolStripMenuItem";
			this->clientsToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->clientsToolStripMenuItem->Text = L"Clients";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(293, 24);
			this->createToolStripMenuItem->Text = L"Ajouter un client";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createToolStripMenuItem_Click);
			// 
			// actualiserUnClientToolStripMenuItem
			// 
			this->actualiserUnClientToolStripMenuItem->Name = L"actualiserUnClientToolStripMenuItem";
			this->actualiserUnClientToolStripMenuItem->Size = System::Drawing::Size(293, 24);
			this->actualiserUnClientToolStripMenuItem->Text = L"Mettre a jour les donnees client";
			// 
			// lireLesDonneesClientToolStripMenuItem
			// 
			this->lireLesDonneesClientToolStripMenuItem->Name = L"lireLesDonneesClientToolStripMenuItem";
			this->lireLesDonneesClientToolStripMenuItem->Size = System::Drawing::Size(293, 24);
			this->lireLesDonneesClientToolStripMenuItem->Text = L"Lire les donnees client";
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
			// 
			// mettreaJourLesDonneesDunPersonnelToolStripMenuItem
			// 
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Name = L"mettreaJourLesDonneesDunPersonnelToolStripMenuItem";
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->mettreaJourLesDonneesDunPersonnelToolStripMenuItem->Text = L"Mettre a jour les donnees d\'un personnel";
			// 
			// lireLesDonneesDunPersonnelToolStripMenuItem
			// 
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Name = L"lireLesDonneesDunPersonnelToolStripMenuItem";
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->lireLesDonneesDunPersonnelToolStripMenuItem->Text = L"Lire les donnees d\'un personnel";
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
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
			// 
			// mettreaJourUneCommandeToolStripMenuItem
			// 
			this->mettreaJourUneCommandeToolStripMenuItem->Name = L"mettreaJourUneCommandeToolStripMenuItem";
			this->mettreaJourUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->mettreaJourUneCommandeToolStripMenuItem->Text = L"Mettre a jour une commande";
			// 
			// visualiserUneCommandeToolStripMenuItem
			// 
			this->visualiserUneCommandeToolStripMenuItem->Name = L"visualiserUneCommandeToolStripMenuItem";
			this->visualiserUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->visualiserUneCommandeToolStripMenuItem->Text = L"Visualiser une commande";
			// 
			// supprimerUneCommandeToolStripMenuItem
			// 
			this->supprimerUneCommandeToolStripMenuItem->Name = L"supprimerUneCommandeToolStripMenuItem";
			this->supprimerUneCommandeToolStripMenuItem->Size = System::Drawing::Size(278, 24);
			this->supprimerUneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
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
			// 
			// mettreaJourUnArticleToolStripMenuItem
			// 
			this->mettreaJourUnArticleToolStripMenuItem->Name = L"mettreaJourUnArticleToolStripMenuItem";
			this->mettreaJourUnArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->mettreaJourUnArticleToolStripMenuItem->Text = L"Mettre a jour un article";
			// 
			// visualiserLesDonneesDunArticleToolStripMenuItem
			// 
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Name = L"visualiserLesDonneesDunArticleToolStripMenuItem";
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->visualiserLesDonneesDunArticleToolStripMenuItem->Text = L"Visualiser les donnees d\'un article";
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(308, 24);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
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
			this->dataview->Location = System::Drawing::Point(482, 48);
			this->dataview->Name = L"dataview";
			this->dataview->Size = System::Drawing::Size(398, 369);
			this->dataview->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 431);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Rangetesclients.net";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->boxCRclient->ResumeLayout(false);
			this->boxCRclient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataview))->EndInit();
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
private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->boxCRclient);
	this->Controls->Add(this->dataview);

}
};
}