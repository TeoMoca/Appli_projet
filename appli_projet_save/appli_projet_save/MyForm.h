#pragma once
//coucou zeubi arouf yo
namespace appliprojet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Description résumée de MyForm
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
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ clientsB;
	protected:

	private: System::Windows::Forms::Button^ personnelB;
	private: System::Windows::Forms::Button^ commandesB;
	private: System::Windows::Forms::Button^ stockB;
	private: System::Windows::Forms::Button^ statsB;




	protected:













	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->clientsB = (gcnew System::Windows::Forms::Button());
			this->personnelB = (gcnew System::Windows::Forms::Button());
			this->commandesB = (gcnew System::Windows::Forms::Button());
			this->stockB = (gcnew System::Windows::Forms::Button());
			this->statsB = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// clientsB
			// 
			this->clientsB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientsB->Location = System::Drawing::Point(12, 12);
			this->clientsB->Name = L"clientsB";
			this->clientsB->Size = System::Drawing::Size(558, 148);
			this->clientsB->TabIndex = 0;
			this->clientsB->Text = L"CLIENTS";
			this->clientsB->UseVisualStyleBackColor = true;
			this->clientsB->Click += gcnew System::EventHandler(this, &MyForm::clientsB_Click);
			// 
			// personnelB
			// 
			this->personnelB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->personnelB->Location = System::Drawing::Point(625, 12);
			this->personnelB->Name = L"personnelB";
			this->personnelB->Size = System::Drawing::Size(558, 148);
			this->personnelB->TabIndex = 1;
			this->personnelB->Text = L"PERSONNEL";
			this->personnelB->UseVisualStyleBackColor = true;
			// 
			// commandesB
			// 
			this->commandesB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->commandesB->Location = System::Drawing::Point(12, 190);
			this->commandesB->Name = L"commandesB";
			this->commandesB->Size = System::Drawing::Size(558, 148);
			this->commandesB->TabIndex = 2;
			this->commandesB->Text = L"COMMANDES";
			this->commandesB->UseVisualStyleBackColor = true;
			// 
			// stockB
			// 
			this->stockB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockB->Location = System::Drawing::Point(625, 190);
			this->stockB->Name = L"stockB";
			this->stockB->Size = System::Drawing::Size(558, 148);
			this->stockB->TabIndex = 3;
			this->stockB->Text = L"STOCK";
			this->stockB->UseVisualStyleBackColor = true;
			// 
			// statsB
			// 
			this->statsB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statsB->Location = System::Drawing::Point(358, 378);
			this->statsB->Name = L"statsB";
			this->statsB->Size = System::Drawing::Size(485, 109);
			this->statsB->TabIndex = 4;
			this->statsB->Text = L"STATISTIQUES";
			this->statsB->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 499);
			this->Controls->Add(this->statsB);
			this->Controls->Add(this->stockB);
			this->Controls->Add(this->commandesB);
			this->Controls->Add(this->personnelB);
			this->Controls->Add(this->clientsB);
			this->Name = L"MyForm";
			this->Text = L"Rangetesclients.net";
			this->ResumeLayout(false);

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
private: System::Void clientsB_Click(System::Object^ sender, System::EventArgs^ e) {
	stockB->Hide();
	commandesB->Hide();
	statsB->Hide();
	clientsB->Hide();
	personnelB->Hide();
}
};
}