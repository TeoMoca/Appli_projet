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
	private: System::Windows::Forms::ToolStripMenuItem^ lireLesDonn�esClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettre�JourLesDonn�esDunPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lireLesDonn�esDunPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ commandesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ passerUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettre�JourUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visualiserUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mettre�JourUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visualiserLesDonn�esDunArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ accueilToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accueilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualiserUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lireLesDonn�esClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettre�JourLesDonn�esDunPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lireLesDonn�esDunPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->passerUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettre�JourUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualiserUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mettre�JourUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualiserLesDonn�esDunArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(1195, 33);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accueilToolStripMenuItem
			// 
			this->accueilToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->accueilToolStripMenuItem->Name = L"accueilToolStripMenuItem";
			this->accueilToolStripMenuItem->Size = System::Drawing::Size(108, 29);
			this->accueilToolStripMenuItem->Text = L"Accueil";
			this->accueilToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::accueilToolStripMenuItem_Click_1);
			// 
			// clientsToolStripMenuItem
			// 
			this->clientsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createToolStripMenuItem,
					this->actualiserUnClientToolStripMenuItem, this->lireLesDonn�esClientToolStripMenuItem
			});
			this->clientsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->clientsToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->clientsToolStripMenuItem->Name = L"clientsToolStripMenuItem";
			this->clientsToolStripMenuItem->Size = System::Drawing::Size(84, 29);
			this->clientsToolStripMenuItem->Text = L"Clients";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(368, 30);
			this->createToolStripMenuItem->Text = L"Ajouter un client";
			// 
			// actualiserUnClientToolStripMenuItem
			// 
			this->actualiserUnClientToolStripMenuItem->Name = L"actualiserUnClientToolStripMenuItem";
			this->actualiserUnClientToolStripMenuItem->Size = System::Drawing::Size(368, 30);
			this->actualiserUnClientToolStripMenuItem->Text = L"Mettre � jour les donne�s client";
			// 
			// lireLesDonn�esClientToolStripMenuItem
			// 
			this->lireLesDonn�esClientToolStripMenuItem->Name = L"lireLesDonn�esClientToolStripMenuItem";
			this->lireLesDonn�esClientToolStripMenuItem->Size = System::Drawing::Size(368, 30);
			this->lireLesDonn�esClientToolStripMenuItem->Text = L"Lire les donn�es client";
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ajouterUnPersonnelToolStripMenuItem,
					this->mettre�JourLesDonn�esDunPersonnelToolStripMenuItem, this->lireLesDonn�esDunPersonnelToolStripMenuItem, this->supprimerUnPersonnelToolStripMenuItem
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
			// 
			// mettre�JourLesDonn�esDunPersonnelToolStripMenuItem
			// 
			this->mettre�JourLesDonn�esDunPersonnelToolStripMenuItem->Name = L"mettre�JourLesDonn�esDunPersonnelToolStripMenuItem";
			this->mettre�JourLesDonn�esDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->mettre�JourLesDonn�esDunPersonnelToolStripMenuItem->Text = L"Mettre � jour les donn�es d\'un personnel";
			// 
			// lireLesDonn�esDunPersonnelToolStripMenuItem
			// 
			this->lireLesDonn�esDunPersonnelToolStripMenuItem->Name = L"lireLesDonn�esDunPersonnelToolStripMenuItem";
			this->lireLesDonn�esDunPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->lireLesDonn�esDunPersonnelToolStripMenuItem->Text = L"Lire les donn�es d\'un personnel";
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(448, 30);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			// 
			// commandesToolStripMenuItem
			// 
			this->commandesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->passerUneCommandeToolStripMenuItem,
					this->mettre�JourUneCommandeToolStripMenuItem, this->visualiserUneCommandeToolStripMenuItem, this->supprimerUneCommandeToolStripMenuItem
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
			// 
			// mettre�JourUneCommandeToolStripMenuItem
			// 
			this->mettre�JourUneCommandeToolStripMenuItem->Name = L"mettre�JourUneCommandeToolStripMenuItem";
			this->mettre�JourUneCommandeToolStripMenuItem->Size = System::Drawing::Size(349, 30);
			this->mettre�JourUneCommandeToolStripMenuItem->Text = L"Mettre � jour une commande";
			// 
			// visualiserUneCommandeToolStripMenuItem
			// 
			this->visualiserUneCommandeToolStripMenuItem->Name = L"visualiserUneCommandeToolStripMenuItem";
			this->visualiserUneCommandeToolStripMenuItem->Size = System::Drawing::Size(349, 30);
			this->visualiserUneCommandeToolStripMenuItem->Text = L"Visualiser une commande";
			// 
			// supprimerUneCommandeToolStripMenuItem
			// 
			this->supprimerUneCommandeToolStripMenuItem->Name = L"supprimerUneCommandeToolStripMenuItem";
			this->supprimerUneCommandeToolStripMenuItem->Size = System::Drawing::Size(349, 30);
			this->supprimerUneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ajouterUnArticleToolStripMenuItem,
					this->mettre�JourUnArticleToolStripMenuItem, this->visualiserLesDonn�esDunArticleToolStripMenuItem, this->supprimerUnArticleToolStripMenuItem
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
			// 
			// mettre�JourUnArticleToolStripMenuItem
			// 
			this->mettre�JourUnArticleToolStripMenuItem->Name = L"mettre�JourUnArticleToolStripMenuItem";
			this->mettre�JourUnArticleToolStripMenuItem->Size = System::Drawing::Size(386, 30);
			this->mettre�JourUnArticleToolStripMenuItem->Text = L"Mettre � jour un article";
			// 
			// visualiserLesDonn�esDunArticleToolStripMenuItem
			// 
			this->visualiserLesDonn�esDunArticleToolStripMenuItem->Name = L"visualiserLesDonn�esDunArticleToolStripMenuItem";
			this->visualiserLesDonn�esDunArticleToolStripMenuItem->Size = System::Drawing::Size(386, 30);
			this->visualiserLesDonn�esDunArticleToolStripMenuItem->Text = L"Visualiser les donn�es d\'un article";
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(386, 30);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(124, 29);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(626, 228);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 499);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Rangetesclients.net";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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

}
};
}