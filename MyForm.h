//	
//	This tool can be used to achieve likelihood ratio for suspect(s) and/or victim(s) in a DNA mixture using probabilistic genotyping
//	LAST Evidence File Generator (C) 2015 Munieshwar Ramdass
//	
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//	GNU General Public License for more details.
//	
//	You should have received a copy of the GNU General Public License
//	along with this program. If not, see <http://www.gnu.org/licenses/>.
//

#pragma once

namespace LAST_Interfacev2 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  case_name;
	protected:
	private: System::Windows::Forms::CheckBox^  deducible;
	private: System::Windows::Forms::NumericUpDown^  contributors;
	private: System::Windows::Forms::Label^  contributor_label;
	private: System::Windows::Forms::Label^  quant_label;
	private: System::Windows::Forms::NumericUpDown^  quant;
	private: System::Windows::Forms::Label^  known_1_label;
	private: System::Windows::Forms::Label^  known_2_label;
	private: System::Windows::Forms::Label^  known_3_label;
	private: System::Windows::Forms::Label^  known_4_label;

	private: System::Windows::Forms::TextBox^  d8_1;
	private: System::Windows::Forms::TextBox^  d8_2;
	private: System::Windows::Forms::TextBox^  d8_3;
	private: System::Windows::Forms::TextBox^  d8_4;
	private: System::Windows::Forms::TextBox^  d8_5;
	private: System::Windows::Forms::TextBox^  d8_6;
	private: System::Windows::Forms::TextBox^  d8_7;







	private: System::Windows::Forms::Label^  replicate_1_label;
	private: System::Windows::Forms::Label^  replicate_2_label;
	private: System::Windows::Forms::Label^  replicate_3_label;
	private: System::Windows::Forms::Label^  d8_label;
	private: System::Windows::Forms::Label^  d21_label;
	private: System::Windows::Forms::TextBox^  d21_7;

	private: System::Windows::Forms::TextBox^  d21_6;

	private: System::Windows::Forms::TextBox^  d21_5;

	private: System::Windows::Forms::TextBox^  d21_4;

	private: System::Windows::Forms::TextBox^  d21_3;

	private: System::Windows::Forms::TextBox^  d21_2;

	private: System::Windows::Forms::TextBox^  d21_1;

	private: System::Windows::Forms::Label^  d7_label;
	private: System::Windows::Forms::TextBox^  d7_7;

	private: System::Windows::Forms::TextBox^  d7_6;

	private: System::Windows::Forms::TextBox^  d7_5;

	private: System::Windows::Forms::TextBox^  d7_4;

	private: System::Windows::Forms::TextBox^  d7_3;

	private: System::Windows::Forms::TextBox^  d7_2;

	private: System::Windows::Forms::TextBox^  d7_1;

	private: System::Windows::Forms::Label^  csf_label;
	private: System::Windows::Forms::TextBox^  csf_7;

	private: System::Windows::Forms::TextBox^  csf_6;

	private: System::Windows::Forms::TextBox^  csf_5;

	private: System::Windows::Forms::TextBox^  csf_4;

	private: System::Windows::Forms::TextBox^  csf_3;
	private: System::Windows::Forms::TextBox^  csf_2;



	private: System::Windows::Forms::TextBox^  csf_1;

	private: System::Windows::Forms::Label^  d3_label;
	private: System::Windows::Forms::TextBox^  d3_7;

	private: System::Windows::Forms::TextBox^  d3_6;

	private: System::Windows::Forms::TextBox^  d3_5;

	private: System::Windows::Forms::TextBox^  d3_4;

	private: System::Windows::Forms::TextBox^  d3_3;

private: System::Windows::Forms::TextBox^  d3_2;

private: System::Windows::Forms::TextBox^  d3_1;

	private: System::Windows::Forms::Label^  th01_label;
private: System::Windows::Forms::TextBox^  th01_7;

private: System::Windows::Forms::TextBox^  th01_6;

private: System::Windows::Forms::TextBox^  th01_5;
private: System::Windows::Forms::TextBox^  th01_4;



private: System::Windows::Forms::TextBox^  th01_3;
private: System::Windows::Forms::TextBox^  th01_2;
private: System::Windows::Forms::TextBox^  th01_1;







	private: System::Windows::Forms::Label^  d13_label;
private: System::Windows::Forms::TextBox^  d13_7;
private: System::Windows::Forms::TextBox^  d13_6;
private: System::Windows::Forms::TextBox^  d13_5;
private: System::Windows::Forms::TextBox^  d13_4;
private: System::Windows::Forms::TextBox^  d13_3;
private: System::Windows::Forms::TextBox^  d13_2;
private: System::Windows::Forms::TextBox^  d13_1;







	private: System::Windows::Forms::Label^  d16_label;
private: System::Windows::Forms::TextBox^  d16_7;

private: System::Windows::Forms::TextBox^  d16_6;

private: System::Windows::Forms::TextBox^  d16_5;

private: System::Windows::Forms::TextBox^  d16_4;

private: System::Windows::Forms::TextBox^  d16_3;

private: System::Windows::Forms::TextBox^  d16_2;

private: System::Windows::Forms::TextBox^  d16_1;
private: System::Windows::Forms::Label^  d2_label;


private: System::Windows::Forms::TextBox^  d2_7;

private: System::Windows::Forms::TextBox^  d2_6;

private: System::Windows::Forms::TextBox^  d2_5;

private: System::Windows::Forms::TextBox^  d2_4;

private: System::Windows::Forms::TextBox^  d2_3;

private: System::Windows::Forms::TextBox^  d2_2;

private: System::Windows::Forms::TextBox^  d2_1;

	private: System::Windows::Forms::Label^  d19_label;
private: System::Windows::Forms::TextBox^  d19_7;
private: System::Windows::Forms::TextBox^  d19_6;
private: System::Windows::Forms::TextBox^  d19_5;
private: System::Windows::Forms::TextBox^  d19_4;
private: System::Windows::Forms::TextBox^  d19_3;
private: System::Windows::Forms::TextBox^  d19_2;
private: System::Windows::Forms::TextBox^  d19_1;







	private: System::Windows::Forms::Label^  vwa_label;
private: System::Windows::Forms::TextBox^  vwa_7;

private: System::Windows::Forms::TextBox^  vwa_6;

private: System::Windows::Forms::TextBox^  vwa_5;

private: System::Windows::Forms::TextBox^  vwa_4;

private: System::Windows::Forms::TextBox^  vwa_3;

private: System::Windows::Forms::TextBox^  vwa_2;

private: System::Windows::Forms::TextBox^  vwa_1;

	private: System::Windows::Forms::Label^  tpox_label;
private: System::Windows::Forms::TextBox^  tpox_7;
private: System::Windows::Forms::TextBox^  tpox_6;
private: System::Windows::Forms::TextBox^  tpox_5;
private: System::Windows::Forms::TextBox^  tpox_4;
private: System::Windows::Forms::TextBox^  tpox_3;
private: System::Windows::Forms::TextBox^  tpox_2;
private: System::Windows::Forms::TextBox^  tpox_1;







	private: System::Windows::Forms::Label^  d18_label;
private: System::Windows::Forms::TextBox^  d18_7;

private: System::Windows::Forms::TextBox^  d18_6;

private: System::Windows::Forms::TextBox^  d18_5;

private: System::Windows::Forms::TextBox^  d18_4;

private: System::Windows::Forms::TextBox^  d18_3;

private: System::Windows::Forms::TextBox^  d18_2;

private: System::Windows::Forms::TextBox^  d18_1;

	private: System::Windows::Forms::Label^  d5_label;
private: System::Windows::Forms::TextBox^  d5_7;
private: System::Windows::Forms::TextBox^  d5_6;
private: System::Windows::Forms::TextBox^  d5_5;
private: System::Windows::Forms::TextBox^  d5_4;
private: System::Windows::Forms::TextBox^  d5_3;
private: System::Windows::Forms::TextBox^  d5_2;
private: System::Windows::Forms::TextBox^  d5_1;







	private: System::Windows::Forms::Label^  fga_label;
private: System::Windows::Forms::TextBox^  fga_7;
private: System::Windows::Forms::TextBox^  fga_6;
private: System::Windows::Forms::TextBox^  fga_5;
private: System::Windows::Forms::TextBox^  fga_4;
private: System::Windows::Forms::TextBox^  fga_3;
private: System::Windows::Forms::TextBox^  fga_2;
private: System::Windows::Forms::TextBox^  fga_1;







	private: System::Windows::Forms::Button^  generate_files_button;
	private: System::Windows::Forms::Button^  run_LAST_button;
private: System::Windows::Forms::Button^  run_LAST_Express_button;
private: System::Windows::Forms::CheckBox^  known1_pd;
private: System::Windows::Forms::CheckBox^  known2_pd;
private: System::Windows::Forms::CheckBox^  known3_pd;

private: System::Windows::Forms::CheckBox^  known4_pd;
private: System::Windows::Forms::Button^  clear;
private: System::Windows::Forms::Label^  copyright;
private: System::Windows::Forms::Label^  directory;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->case_name = (gcnew System::Windows::Forms::TextBox());
			this->deducible = (gcnew System::Windows::Forms::CheckBox());
			this->contributors = (gcnew System::Windows::Forms::NumericUpDown());
			this->contributor_label = (gcnew System::Windows::Forms::Label());
			this->quant_label = (gcnew System::Windows::Forms::Label());
			this->quant = (gcnew System::Windows::Forms::NumericUpDown());
			this->known_1_label = (gcnew System::Windows::Forms::Label());
			this->known_2_label = (gcnew System::Windows::Forms::Label());
			this->known_3_label = (gcnew System::Windows::Forms::Label());
			this->known_4_label = (gcnew System::Windows::Forms::Label());
			this->d8_1 = (gcnew System::Windows::Forms::TextBox());
			this->d8_2 = (gcnew System::Windows::Forms::TextBox());
			this->d8_3 = (gcnew System::Windows::Forms::TextBox());
			this->d8_4 = (gcnew System::Windows::Forms::TextBox());
			this->d8_5 = (gcnew System::Windows::Forms::TextBox());
			this->d8_6 = (gcnew System::Windows::Forms::TextBox());
			this->d8_7 = (gcnew System::Windows::Forms::TextBox());
			this->replicate_1_label = (gcnew System::Windows::Forms::Label());
			this->replicate_2_label = (gcnew System::Windows::Forms::Label());
			this->replicate_3_label = (gcnew System::Windows::Forms::Label());
			this->d8_label = (gcnew System::Windows::Forms::Label());
			this->d21_label = (gcnew System::Windows::Forms::Label());
			this->d21_7 = (gcnew System::Windows::Forms::TextBox());
			this->d21_6 = (gcnew System::Windows::Forms::TextBox());
			this->d21_5 = (gcnew System::Windows::Forms::TextBox());
			this->d21_4 = (gcnew System::Windows::Forms::TextBox());
			this->d21_3 = (gcnew System::Windows::Forms::TextBox());
			this->d21_2 = (gcnew System::Windows::Forms::TextBox());
			this->d21_1 = (gcnew System::Windows::Forms::TextBox());
			this->d7_label = (gcnew System::Windows::Forms::Label());
			this->d7_7 = (gcnew System::Windows::Forms::TextBox());
			this->d7_6 = (gcnew System::Windows::Forms::TextBox());
			this->d7_5 = (gcnew System::Windows::Forms::TextBox());
			this->d7_4 = (gcnew System::Windows::Forms::TextBox());
			this->d7_3 = (gcnew System::Windows::Forms::TextBox());
			this->d7_2 = (gcnew System::Windows::Forms::TextBox());
			this->d7_1 = (gcnew System::Windows::Forms::TextBox());
			this->csf_label = (gcnew System::Windows::Forms::Label());
			this->csf_7 = (gcnew System::Windows::Forms::TextBox());
			this->csf_6 = (gcnew System::Windows::Forms::TextBox());
			this->csf_5 = (gcnew System::Windows::Forms::TextBox());
			this->csf_4 = (gcnew System::Windows::Forms::TextBox());
			this->csf_3 = (gcnew System::Windows::Forms::TextBox());
			this->csf_2 = (gcnew System::Windows::Forms::TextBox());
			this->csf_1 = (gcnew System::Windows::Forms::TextBox());
			this->d3_label = (gcnew System::Windows::Forms::Label());
			this->d3_7 = (gcnew System::Windows::Forms::TextBox());
			this->d3_6 = (gcnew System::Windows::Forms::TextBox());
			this->d3_5 = (gcnew System::Windows::Forms::TextBox());
			this->d3_4 = (gcnew System::Windows::Forms::TextBox());
			this->d3_3 = (gcnew System::Windows::Forms::TextBox());
			this->d3_2 = (gcnew System::Windows::Forms::TextBox());
			this->d3_1 = (gcnew System::Windows::Forms::TextBox());
			this->th01_label = (gcnew System::Windows::Forms::Label());
			this->th01_7 = (gcnew System::Windows::Forms::TextBox());
			this->th01_6 = (gcnew System::Windows::Forms::TextBox());
			this->th01_5 = (gcnew System::Windows::Forms::TextBox());
			this->th01_4 = (gcnew System::Windows::Forms::TextBox());
			this->th01_3 = (gcnew System::Windows::Forms::TextBox());
			this->th01_2 = (gcnew System::Windows::Forms::TextBox());
			this->th01_1 = (gcnew System::Windows::Forms::TextBox());
			this->d13_label = (gcnew System::Windows::Forms::Label());
			this->d13_7 = (gcnew System::Windows::Forms::TextBox());
			this->d13_6 = (gcnew System::Windows::Forms::TextBox());
			this->d13_5 = (gcnew System::Windows::Forms::TextBox());
			this->d13_4 = (gcnew System::Windows::Forms::TextBox());
			this->d13_3 = (gcnew System::Windows::Forms::TextBox());
			this->d13_2 = (gcnew System::Windows::Forms::TextBox());
			this->d13_1 = (gcnew System::Windows::Forms::TextBox());
			this->d16_label = (gcnew System::Windows::Forms::Label());
			this->d16_7 = (gcnew System::Windows::Forms::TextBox());
			this->d16_6 = (gcnew System::Windows::Forms::TextBox());
			this->d16_5 = (gcnew System::Windows::Forms::TextBox());
			this->d16_4 = (gcnew System::Windows::Forms::TextBox());
			this->d16_3 = (gcnew System::Windows::Forms::TextBox());
			this->d16_2 = (gcnew System::Windows::Forms::TextBox());
			this->d16_1 = (gcnew System::Windows::Forms::TextBox());
			this->d2_label = (gcnew System::Windows::Forms::Label());
			this->d2_7 = (gcnew System::Windows::Forms::TextBox());
			this->d2_6 = (gcnew System::Windows::Forms::TextBox());
			this->d2_5 = (gcnew System::Windows::Forms::TextBox());
			this->d2_4 = (gcnew System::Windows::Forms::TextBox());
			this->d2_3 = (gcnew System::Windows::Forms::TextBox());
			this->d2_2 = (gcnew System::Windows::Forms::TextBox());
			this->d2_1 = (gcnew System::Windows::Forms::TextBox());
			this->d19_label = (gcnew System::Windows::Forms::Label());
			this->d19_7 = (gcnew System::Windows::Forms::TextBox());
			this->d19_6 = (gcnew System::Windows::Forms::TextBox());
			this->d19_5 = (gcnew System::Windows::Forms::TextBox());
			this->d19_4 = (gcnew System::Windows::Forms::TextBox());
			this->d19_3 = (gcnew System::Windows::Forms::TextBox());
			this->d19_2 = (gcnew System::Windows::Forms::TextBox());
			this->d19_1 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_label = (gcnew System::Windows::Forms::Label());
			this->vwa_7 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_6 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_5 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_4 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_3 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_2 = (gcnew System::Windows::Forms::TextBox());
			this->vwa_1 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_label = (gcnew System::Windows::Forms::Label());
			this->tpox_7 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_6 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_5 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_4 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_3 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_2 = (gcnew System::Windows::Forms::TextBox());
			this->tpox_1 = (gcnew System::Windows::Forms::TextBox());
			this->d18_label = (gcnew System::Windows::Forms::Label());
			this->d18_7 = (gcnew System::Windows::Forms::TextBox());
			this->d18_6 = (gcnew System::Windows::Forms::TextBox());
			this->d18_5 = (gcnew System::Windows::Forms::TextBox());
			this->d18_4 = (gcnew System::Windows::Forms::TextBox());
			this->d18_3 = (gcnew System::Windows::Forms::TextBox());
			this->d18_2 = (gcnew System::Windows::Forms::TextBox());
			this->d18_1 = (gcnew System::Windows::Forms::TextBox());
			this->d5_label = (gcnew System::Windows::Forms::Label());
			this->d5_7 = (gcnew System::Windows::Forms::TextBox());
			this->d5_6 = (gcnew System::Windows::Forms::TextBox());
			this->d5_5 = (gcnew System::Windows::Forms::TextBox());
			this->d5_4 = (gcnew System::Windows::Forms::TextBox());
			this->d5_3 = (gcnew System::Windows::Forms::TextBox());
			this->d5_2 = (gcnew System::Windows::Forms::TextBox());
			this->d5_1 = (gcnew System::Windows::Forms::TextBox());
			this->fga_label = (gcnew System::Windows::Forms::Label());
			this->fga_7 = (gcnew System::Windows::Forms::TextBox());
			this->fga_6 = (gcnew System::Windows::Forms::TextBox());
			this->fga_5 = (gcnew System::Windows::Forms::TextBox());
			this->fga_4 = (gcnew System::Windows::Forms::TextBox());
			this->fga_3 = (gcnew System::Windows::Forms::TextBox());
			this->fga_2 = (gcnew System::Windows::Forms::TextBox());
			this->fga_1 = (gcnew System::Windows::Forms::TextBox());
			this->generate_files_button = (gcnew System::Windows::Forms::Button());
			this->run_LAST_button = (gcnew System::Windows::Forms::Button());
			this->run_LAST_Express_button = (gcnew System::Windows::Forms::Button());
			this->known1_pd = (gcnew System::Windows::Forms::CheckBox());
			this->known2_pd = (gcnew System::Windows::Forms::CheckBox());
			this->known3_pd = (gcnew System::Windows::Forms::CheckBox());
			this->known4_pd = (gcnew System::Windows::Forms::CheckBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->copyright = (gcnew System::Windows::Forms::Label());
			this->directory = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contributors))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quant))->BeginInit();
			this->SuspendLayout();
			// 
			// case_name
			// 
			this->case_name->Location = System::Drawing::Point(15, 12);
			this->case_name->Name = L"case_name";
			this->case_name->Size = System::Drawing::Size(196, 20);
			this->case_name->TabIndex = 0;
			this->case_name->Text = L"Case Name";
			this->case_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// deducible
			// 
			this->deducible->AutoSize = true;
			this->deducible->Location = System::Drawing::Point(15, 57);
			this->deducible->Name = L"deducible";
			this->deducible->Size = System::Drawing::Size(72, 16);
			this->deducible->TabIndex = 1;
			this->deducible->Text = L"Deducible";
			this->deducible->UseVisualStyleBackColor = true;
			// 
			// contributors
			// 
			this->contributors->Location = System::Drawing::Point(128, 36);
			this->contributors->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->contributors->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->contributors->Name = L"contributors";
			this->contributors->Size = System::Drawing::Size(84, 20);
			this->contributors->TabIndex = 2;
			this->contributors->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->contributors->TextChanged += gcnew System::EventHandler(this, &MyForm::contributors_TextChanged);
			// 
			// contributor_label
			// 
			this->contributor_label->AutoSize = true;
			this->contributor_label->Location = System::Drawing::Point(12, 38);
			this->contributor_label->Name = L"contributor_label";
			this->contributor_label->Size = System::Drawing::Size(64, 12);
			this->contributor_label->TabIndex = 3;
			this->contributor_label->Text = L"Contributors";
			// 
			// quant_label
			// 
			this->quant_label->AutoSize = true;
			this->quant_label->Location = System::Drawing::Point(14, 76);
			this->quant_label->Name = L"quant_label";
			this->quant_label->Size = System::Drawing::Size(34, 12);
			this->quant_label->TabIndex = 5;
			this->quant_label->Text = L"Quant";
			// 
			// quant
			// 
			this->quant->DecimalPlaces = 2;
			this->quant->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->quant->Location = System::Drawing::Point(131, 74);
			this->quant->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->quant->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 625, 0, 0, 131072 });
			this->quant->Name = L"quant";
			this->quant->Size = System::Drawing::Size(84, 20);
			this->quant->TabIndex = 4;
			this->quant->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2500, 0, 0, 131072 });
			// 
			// known_1_label
			// 
			this->known_1_label->AutoSize = true;
			this->known_1_label->Location = System::Drawing::Point(404, 8);
			this->known_1_label->Name = L"known_1_label";
			this->known_1_label->Size = System::Drawing::Size(45, 12);
			this->known_1_label->TabIndex = 6;
			this->known_1_label->Text = L"Known 1";
			// 
			// known_2_label
			// 
			this->known_2_label->AutoSize = true;
			this->known_2_label->Location = System::Drawing::Point(519, 8);
			this->known_2_label->Name = L"known_2_label";
			this->known_2_label->Size = System::Drawing::Size(46, 12);
			this->known_2_label->TabIndex = 7;
			this->known_2_label->Text = L"Known 2";
			// 
			// known_3_label
			// 
			this->known_3_label->AutoSize = true;
			this->known_3_label->Location = System::Drawing::Point(638, 8);
			this->known_3_label->Name = L"known_3_label";
			this->known_3_label->Size = System::Drawing::Size(46, 12);
			this->known_3_label->TabIndex = 8;
			this->known_3_label->Text = L"Known 3";
			// 
			// known_4_label
			// 
			this->known_4_label->AutoSize = true;
			this->known_4_label->Location = System::Drawing::Point(756, 8);
			this->known_4_label->Name = L"known_4_label";
			this->known_4_label->Size = System::Drawing::Size(46, 12);
			this->known_4_label->TabIndex = 9;
			this->known_4_label->Text = L"Known 4";
			// 
			// d8_1
			// 
			this->d8_1->Location = System::Drawing::Point(367, 35);
			this->d8_1->Name = L"d8_1";
			this->d8_1->Size = System::Drawing::Size(116, 20);
			this->d8_1->TabIndex = 10;
			this->d8_1->Text = L"10;10";
			this->d8_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d8_2
			// 
			this->d8_2->Location = System::Drawing::Point(491, 35);
			this->d8_2->Name = L"d8_2";
			this->d8_2->Size = System::Drawing::Size(116, 20);
			this->d8_2->TabIndex = 11;
			this->d8_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d8_3
			// 
			this->d8_3->Location = System::Drawing::Point(615, 35);
			this->d8_3->Name = L"d8_3";
			this->d8_3->Size = System::Drawing::Size(116, 20);
			this->d8_3->TabIndex = 12;
			this->d8_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d8_4
			// 
			this->d8_4->Location = System::Drawing::Point(738, 35);
			this->d8_4->Name = L"d8_4";
			this->d8_4->Size = System::Drawing::Size(116, 20);
			this->d8_4->TabIndex = 13;
			this->d8_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d8_5
			// 
			this->d8_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d8_5->Location = System::Drawing::Point(913, 35);
			this->d8_5->Name = L"d8_5";
			this->d8_5->Size = System::Drawing::Size(116, 20);
			this->d8_5->TabIndex = 14;
			this->d8_5->Text = L"INC";
			this->d8_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d8_6
			// 
			this->d8_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d8_6->Location = System::Drawing::Point(1037, 35);
			this->d8_6->Name = L"d8_6";
			this->d8_6->Size = System::Drawing::Size(116, 20);
			this->d8_6->TabIndex = 15;
			this->d8_6->Text = L"INC";
			this->d8_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d8_7
			// 
			this->d8_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d8_7->Location = System::Drawing::Point(1161, 35);
			this->d8_7->Name = L"d8_7";
			this->d8_7->Size = System::Drawing::Size(116, 20);
			this->d8_7->TabIndex = 16;
			this->d8_7->Text = L"INC";
			this->d8_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// replicate_1_label
			// 
			this->replicate_1_label->AutoSize = true;
			this->replicate_1_label->Location = System::Drawing::Point(939, 8);
			this->replicate_1_label->Name = L"replicate_1_label";
			this->replicate_1_label->Size = System::Drawing::Size(55, 12);
			this->replicate_1_label->TabIndex = 17;
			this->replicate_1_label->Text = L"Replicate 1";
			// 
			// replicate_2_label
			// 
			this->replicate_2_label->AutoSize = true;
			this->replicate_2_label->Location = System::Drawing::Point(1063, 8);
			this->replicate_2_label->Name = L"replicate_2_label";
			this->replicate_2_label->Size = System::Drawing::Size(56, 12);
			this->replicate_2_label->TabIndex = 18;
			this->replicate_2_label->Text = L"Replicate 2";
			// 
			// replicate_3_label
			// 
			this->replicate_3_label->AutoSize = true;
			this->replicate_3_label->Location = System::Drawing::Point(1185, 8);
			this->replicate_3_label->Name = L"replicate_3_label";
			this->replicate_3_label->Size = System::Drawing::Size(56, 12);
			this->replicate_3_label->TabIndex = 19;
			this->replicate_3_label->Text = L"Replicate 3";
			// 
			// d8_label
			// 
			this->d8_label->AutoSize = true;
			this->d8_label->Location = System::Drawing::Point(315, 38);
			this->d8_label->Name = L"d8_label";
			this->d8_label->Size = System::Drawing::Size(19, 12);
			this->d8_label->TabIndex = 20;
			this->d8_label->Text = L"D8";
			// 
			// d21_label
			// 
			this->d21_label->AutoSize = true;
			this->d21_label->Location = System::Drawing::Point(315, 64);
			this->d21_label->Name = L"d21_label";
			this->d21_label->Size = System::Drawing::Size(23, 12);
			this->d21_label->TabIndex = 28;
			this->d21_label->Text = L"D21";
			// 
			// d21_7
			// 
			this->d21_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d21_7->Location = System::Drawing::Point(1161, 61);
			this->d21_7->Name = L"d21_7";
			this->d21_7->Size = System::Drawing::Size(116, 20);
			this->d21_7->TabIndex = 27;
			this->d21_7->Text = L"INC";
			this->d21_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d21_6
			// 
			this->d21_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d21_6->Location = System::Drawing::Point(1037, 61);
			this->d21_6->Name = L"d21_6";
			this->d21_6->Size = System::Drawing::Size(116, 20);
			this->d21_6->TabIndex = 26;
			this->d21_6->Text = L"INC";
			this->d21_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d21_5
			// 
			this->d21_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d21_5->Location = System::Drawing::Point(913, 61);
			this->d21_5->Name = L"d21_5";
			this->d21_5->Size = System::Drawing::Size(116, 20);
			this->d21_5->TabIndex = 25;
			this->d21_5->Text = L"INC";
			this->d21_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d21_4
			// 
			this->d21_4->Location = System::Drawing::Point(738, 61);
			this->d21_4->Name = L"d21_4";
			this->d21_4->Size = System::Drawing::Size(116, 20);
			this->d21_4->TabIndex = 24;
			this->d21_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d21_3
			// 
			this->d21_3->Location = System::Drawing::Point(615, 61);
			this->d21_3->Name = L"d21_3";
			this->d21_3->Size = System::Drawing::Size(116, 20);
			this->d21_3->TabIndex = 23;
			this->d21_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d21_2
			// 
			this->d21_2->Location = System::Drawing::Point(491, 61);
			this->d21_2->Name = L"d21_2";
			this->d21_2->Size = System::Drawing::Size(116, 20);
			this->d21_2->TabIndex = 22;
			this->d21_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d21_1
			// 
			this->d21_1->Location = System::Drawing::Point(367, 61);
			this->d21_1->Name = L"d21_1";
			this->d21_1->Size = System::Drawing::Size(116, 20);
			this->d21_1->TabIndex = 21;
			this->d21_1->Text = L"30;30";
			this->d21_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_label
			// 
			this->d7_label->AutoSize = true;
			this->d7_label->Location = System::Drawing::Point(315, 90);
			this->d7_label->Name = L"d7_label";
			this->d7_label->Size = System::Drawing::Size(19, 12);
			this->d7_label->TabIndex = 36;
			this->d7_label->Text = L"D7";
			// 
			// d7_7
			// 
			this->d7_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d7_7->Location = System::Drawing::Point(1161, 87);
			this->d7_7->Name = L"d7_7";
			this->d7_7->Size = System::Drawing::Size(116, 20);
			this->d7_7->TabIndex = 35;
			this->d7_7->Text = L"INC";
			this->d7_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_6
			// 
			this->d7_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d7_6->Location = System::Drawing::Point(1037, 87);
			this->d7_6->Name = L"d7_6";
			this->d7_6->Size = System::Drawing::Size(116, 20);
			this->d7_6->TabIndex = 34;
			this->d7_6->Text = L"INC";
			this->d7_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_5
			// 
			this->d7_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d7_5->Location = System::Drawing::Point(913, 87);
			this->d7_5->Name = L"d7_5";
			this->d7_5->Size = System::Drawing::Size(116, 20);
			this->d7_5->TabIndex = 33;
			this->d7_5->Text = L"INC";
			this->d7_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_4
			// 
			this->d7_4->Location = System::Drawing::Point(738, 87);
			this->d7_4->Name = L"d7_4";
			this->d7_4->Size = System::Drawing::Size(116, 20);
			this->d7_4->TabIndex = 32;
			this->d7_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_3
			// 
			this->d7_3->Location = System::Drawing::Point(615, 87);
			this->d7_3->Name = L"d7_3";
			this->d7_3->Size = System::Drawing::Size(116, 20);
			this->d7_3->TabIndex = 31;
			this->d7_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_2
			// 
			this->d7_2->Location = System::Drawing::Point(491, 87);
			this->d7_2->Name = L"d7_2";
			this->d7_2->Size = System::Drawing::Size(116, 20);
			this->d7_2->TabIndex = 30;
			this->d7_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d7_1
			// 
			this->d7_1->Location = System::Drawing::Point(367, 87);
			this->d7_1->Name = L"d7_1";
			this->d7_1->Size = System::Drawing::Size(116, 20);
			this->d7_1->TabIndex = 29;
			this->d7_1->Text = L"10;10";
			this->d7_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_label
			// 
			this->csf_label->AutoSize = true;
			this->csf_label->Location = System::Drawing::Point(315, 116);
			this->csf_label->Name = L"csf_label";
			this->csf_label->Size = System::Drawing::Size(25, 12);
			this->csf_label->TabIndex = 44;
			this->csf_label->Text = L"CSF";
			// 
			// csf_7
			// 
			this->csf_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->csf_7->Location = System::Drawing::Point(1161, 113);
			this->csf_7->Name = L"csf_7";
			this->csf_7->Size = System::Drawing::Size(116, 20);
			this->csf_7->TabIndex = 43;
			this->csf_7->Text = L"INC";
			this->csf_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_6
			// 
			this->csf_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->csf_6->Location = System::Drawing::Point(1037, 113);
			this->csf_6->Name = L"csf_6";
			this->csf_6->Size = System::Drawing::Size(116, 20);
			this->csf_6->TabIndex = 42;
			this->csf_6->Text = L"INC";
			this->csf_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_5
			// 
			this->csf_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->csf_5->Location = System::Drawing::Point(913, 113);
			this->csf_5->Name = L"csf_5";
			this->csf_5->Size = System::Drawing::Size(116, 20);
			this->csf_5->TabIndex = 41;
			this->csf_5->Text = L"INC";
			this->csf_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_4
			// 
			this->csf_4->Location = System::Drawing::Point(738, 113);
			this->csf_4->Name = L"csf_4";
			this->csf_4->Size = System::Drawing::Size(116, 20);
			this->csf_4->TabIndex = 40;
			this->csf_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_3
			// 
			this->csf_3->Location = System::Drawing::Point(615, 113);
			this->csf_3->Name = L"csf_3";
			this->csf_3->Size = System::Drawing::Size(116, 20);
			this->csf_3->TabIndex = 39;
			this->csf_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_2
			// 
			this->csf_2->Location = System::Drawing::Point(491, 113);
			this->csf_2->Name = L"csf_2";
			this->csf_2->Size = System::Drawing::Size(116, 20);
			this->csf_2->TabIndex = 38;
			this->csf_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// csf_1
			// 
			this->csf_1->Location = System::Drawing::Point(367, 113);
			this->csf_1->Name = L"csf_1";
			this->csf_1->Size = System::Drawing::Size(116, 20);
			this->csf_1->TabIndex = 37;
			this->csf_1->Text = L"10;10";
			this->csf_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_label
			// 
			this->d3_label->AutoSize = true;
			this->d3_label->Location = System::Drawing::Point(315, 142);
			this->d3_label->Name = L"d3_label";
			this->d3_label->Size = System::Drawing::Size(19, 12);
			this->d3_label->TabIndex = 52;
			this->d3_label->Text = L"D3";
			// 
			// d3_7
			// 
			this->d3_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d3_7->Location = System::Drawing::Point(1161, 139);
			this->d3_7->Name = L"d3_7";
			this->d3_7->Size = System::Drawing::Size(116, 20);
			this->d3_7->TabIndex = 51;
			this->d3_7->Text = L"INC";
			this->d3_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_6
			// 
			this->d3_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d3_6->Location = System::Drawing::Point(1037, 139);
			this->d3_6->Name = L"d3_6";
			this->d3_6->Size = System::Drawing::Size(116, 20);
			this->d3_6->TabIndex = 50;
			this->d3_6->Text = L"INC";
			this->d3_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_5
			// 
			this->d3_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d3_5->Location = System::Drawing::Point(913, 139);
			this->d3_5->Name = L"d3_5";
			this->d3_5->Size = System::Drawing::Size(116, 20);
			this->d3_5->TabIndex = 49;
			this->d3_5->Text = L"INC";
			this->d3_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_4
			// 
			this->d3_4->Location = System::Drawing::Point(738, 139);
			this->d3_4->Name = L"d3_4";
			this->d3_4->Size = System::Drawing::Size(116, 20);
			this->d3_4->TabIndex = 48;
			this->d3_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_3
			// 
			this->d3_3->Location = System::Drawing::Point(615, 139);
			this->d3_3->Name = L"d3_3";
			this->d3_3->Size = System::Drawing::Size(116, 20);
			this->d3_3->TabIndex = 47;
			this->d3_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_2
			// 
			this->d3_2->Location = System::Drawing::Point(491, 139);
			this->d3_2->Name = L"d3_2";
			this->d3_2->Size = System::Drawing::Size(116, 20);
			this->d3_2->TabIndex = 46;
			this->d3_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d3_1
			// 
			this->d3_1->Location = System::Drawing::Point(367, 139);
			this->d3_1->Name = L"d3_1";
			this->d3_1->Size = System::Drawing::Size(116, 20);
			this->d3_1->TabIndex = 45;
			this->d3_1->Text = L"10;10";
			this->d3_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_label
			// 
			this->th01_label->AutoSize = true;
			this->th01_label->Location = System::Drawing::Point(315, 168);
			this->th01_label->Name = L"th01_label";
			this->th01_label->Size = System::Drawing::Size(32, 12);
			this->th01_label->TabIndex = 60;
			this->th01_label->Text = L"TH01";
			// 
			// th01_7
			// 
			this->th01_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->th01_7->Location = System::Drawing::Point(1161, 165);
			this->th01_7->Name = L"th01_7";
			this->th01_7->Size = System::Drawing::Size(116, 20);
			this->th01_7->TabIndex = 59;
			this->th01_7->Text = L"INC";
			this->th01_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_6
			// 
			this->th01_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->th01_6->Location = System::Drawing::Point(1037, 165);
			this->th01_6->Name = L"th01_6";
			this->th01_6->Size = System::Drawing::Size(116, 20);
			this->th01_6->TabIndex = 58;
			this->th01_6->Text = L"INC";
			this->th01_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_5
			// 
			this->th01_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->th01_5->Location = System::Drawing::Point(913, 165);
			this->th01_5->Name = L"th01_5";
			this->th01_5->Size = System::Drawing::Size(116, 20);
			this->th01_5->TabIndex = 57;
			this->th01_5->Text = L"INC";
			this->th01_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_4
			// 
			this->th01_4->Location = System::Drawing::Point(738, 165);
			this->th01_4->Name = L"th01_4";
			this->th01_4->Size = System::Drawing::Size(116, 20);
			this->th01_4->TabIndex = 56;
			this->th01_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_3
			// 
			this->th01_3->Location = System::Drawing::Point(615, 165);
			this->th01_3->Name = L"th01_3";
			this->th01_3->Size = System::Drawing::Size(116, 20);
			this->th01_3->TabIndex = 55;
			this->th01_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_2
			// 
			this->th01_2->Location = System::Drawing::Point(491, 165);
			this->th01_2->Name = L"th01_2";
			this->th01_2->Size = System::Drawing::Size(116, 20);
			this->th01_2->TabIndex = 54;
			this->th01_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// th01_1
			// 
			this->th01_1->Location = System::Drawing::Point(367, 165);
			this->th01_1->Name = L"th01_1";
			this->th01_1->Size = System::Drawing::Size(116, 20);
			this->th01_1->TabIndex = 53;
			this->th01_1->Text = L"10;10";
			this->th01_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_label
			// 
			this->d13_label->AutoSize = true;
			this->d13_label->Location = System::Drawing::Point(315, 194);
			this->d13_label->Name = L"d13_label";
			this->d13_label->Size = System::Drawing::Size(23, 12);
			this->d13_label->TabIndex = 68;
			this->d13_label->Text = L"D13";
			// 
			// d13_7
			// 
			this->d13_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d13_7->Location = System::Drawing::Point(1161, 191);
			this->d13_7->Name = L"d13_7";
			this->d13_7->Size = System::Drawing::Size(116, 20);
			this->d13_7->TabIndex = 67;
			this->d13_7->Text = L"INC";
			this->d13_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_6
			// 
			this->d13_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d13_6->Location = System::Drawing::Point(1037, 191);
			this->d13_6->Name = L"d13_6";
			this->d13_6->Size = System::Drawing::Size(116, 20);
			this->d13_6->TabIndex = 66;
			this->d13_6->Text = L"INC";
			this->d13_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_5
			// 
			this->d13_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d13_5->Location = System::Drawing::Point(913, 191);
			this->d13_5->Name = L"d13_5";
			this->d13_5->Size = System::Drawing::Size(116, 20);
			this->d13_5->TabIndex = 65;
			this->d13_5->Text = L"INC";
			this->d13_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_4
			// 
			this->d13_4->Location = System::Drawing::Point(738, 191);
			this->d13_4->Name = L"d13_4";
			this->d13_4->Size = System::Drawing::Size(116, 20);
			this->d13_4->TabIndex = 64;
			this->d13_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_3
			// 
			this->d13_3->Location = System::Drawing::Point(615, 191);
			this->d13_3->Name = L"d13_3";
			this->d13_3->Size = System::Drawing::Size(116, 20);
			this->d13_3->TabIndex = 63;
			this->d13_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_2
			// 
			this->d13_2->Location = System::Drawing::Point(491, 191);
			this->d13_2->Name = L"d13_2";
			this->d13_2->Size = System::Drawing::Size(116, 20);
			this->d13_2->TabIndex = 62;
			this->d13_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d13_1
			// 
			this->d13_1->Location = System::Drawing::Point(367, 191);
			this->d13_1->Name = L"d13_1";
			this->d13_1->Size = System::Drawing::Size(116, 20);
			this->d13_1->TabIndex = 61;
			this->d13_1->Text = L"10;10";
			this->d13_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_label
			// 
			this->d16_label->AutoSize = true;
			this->d16_label->Location = System::Drawing::Point(315, 220);
			this->d16_label->Name = L"d16_label";
			this->d16_label->Size = System::Drawing::Size(23, 12);
			this->d16_label->TabIndex = 76;
			this->d16_label->Text = L"D16";
			// 
			// d16_7
			// 
			this->d16_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d16_7->Location = System::Drawing::Point(1161, 217);
			this->d16_7->Name = L"d16_7";
			this->d16_7->Size = System::Drawing::Size(116, 20);
			this->d16_7->TabIndex = 75;
			this->d16_7->Text = L"INC";
			this->d16_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_6
			// 
			this->d16_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d16_6->Location = System::Drawing::Point(1037, 217);
			this->d16_6->Name = L"d16_6";
			this->d16_6->Size = System::Drawing::Size(116, 20);
			this->d16_6->TabIndex = 74;
			this->d16_6->Text = L"INC";
			this->d16_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_5
			// 
			this->d16_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d16_5->Location = System::Drawing::Point(913, 217);
			this->d16_5->Name = L"d16_5";
			this->d16_5->Size = System::Drawing::Size(116, 20);
			this->d16_5->TabIndex = 73;
			this->d16_5->Text = L"INC";
			this->d16_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_4
			// 
			this->d16_4->Location = System::Drawing::Point(738, 217);
			this->d16_4->Name = L"d16_4";
			this->d16_4->Size = System::Drawing::Size(116, 20);
			this->d16_4->TabIndex = 72;
			this->d16_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_3
			// 
			this->d16_3->Location = System::Drawing::Point(615, 217);
			this->d16_3->Name = L"d16_3";
			this->d16_3->Size = System::Drawing::Size(116, 20);
			this->d16_3->TabIndex = 71;
			this->d16_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_2
			// 
			this->d16_2->Location = System::Drawing::Point(491, 217);
			this->d16_2->Name = L"d16_2";
			this->d16_2->Size = System::Drawing::Size(116, 20);
			this->d16_2->TabIndex = 70;
			this->d16_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d16_1
			// 
			this->d16_1->Location = System::Drawing::Point(367, 217);
			this->d16_1->Name = L"d16_1";
			this->d16_1->Size = System::Drawing::Size(116, 20);
			this->d16_1->TabIndex = 69;
			this->d16_1->Text = L"10;10";
			this->d16_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_label
			// 
			this->d2_label->AutoSize = true;
			this->d2_label->Location = System::Drawing::Point(315, 246);
			this->d2_label->Name = L"d2_label";
			this->d2_label->Size = System::Drawing::Size(19, 12);
			this->d2_label->TabIndex = 84;
			this->d2_label->Text = L"D2";
			// 
			// d2_7
			// 
			this->d2_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d2_7->Location = System::Drawing::Point(1161, 243);
			this->d2_7->Name = L"d2_7";
			this->d2_7->Size = System::Drawing::Size(116, 20);
			this->d2_7->TabIndex = 83;
			this->d2_7->Text = L"INC";
			this->d2_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_6
			// 
			this->d2_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d2_6->Location = System::Drawing::Point(1037, 243);
			this->d2_6->Name = L"d2_6";
			this->d2_6->Size = System::Drawing::Size(116, 20);
			this->d2_6->TabIndex = 82;
			this->d2_6->Text = L"INC";
			this->d2_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_5
			// 
			this->d2_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d2_5->Location = System::Drawing::Point(913, 243);
			this->d2_5->Name = L"d2_5";
			this->d2_5->Size = System::Drawing::Size(116, 20);
			this->d2_5->TabIndex = 81;
			this->d2_5->Text = L"INC";
			this->d2_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_4
			// 
			this->d2_4->Location = System::Drawing::Point(738, 243);
			this->d2_4->Name = L"d2_4";
			this->d2_4->Size = System::Drawing::Size(116, 20);
			this->d2_4->TabIndex = 80;
			this->d2_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_3
			// 
			this->d2_3->Location = System::Drawing::Point(615, 243);
			this->d2_3->Name = L"d2_3";
			this->d2_3->Size = System::Drawing::Size(116, 20);
			this->d2_3->TabIndex = 79;
			this->d2_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_2
			// 
			this->d2_2->Location = System::Drawing::Point(491, 243);
			this->d2_2->Name = L"d2_2";
			this->d2_2->Size = System::Drawing::Size(116, 20);
			this->d2_2->TabIndex = 78;
			this->d2_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d2_1
			// 
			this->d2_1->Location = System::Drawing::Point(367, 243);
			this->d2_1->Name = L"d2_1";
			this->d2_1->Size = System::Drawing::Size(116, 20);
			this->d2_1->TabIndex = 77;
			this->d2_1->Text = L"10;10";
			this->d2_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_label
			// 
			this->d19_label->AutoSize = true;
			this->d19_label->Location = System::Drawing::Point(315, 272);
			this->d19_label->Name = L"d19_label";
			this->d19_label->Size = System::Drawing::Size(23, 12);
			this->d19_label->TabIndex = 92;
			this->d19_label->Text = L"D19";
			// 
			// d19_7
			// 
			this->d19_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d19_7->Location = System::Drawing::Point(1161, 269);
			this->d19_7->Name = L"d19_7";
			this->d19_7->Size = System::Drawing::Size(116, 20);
			this->d19_7->TabIndex = 91;
			this->d19_7->Text = L"INC";
			this->d19_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_6
			// 
			this->d19_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d19_6->Location = System::Drawing::Point(1037, 269);
			this->d19_6->Name = L"d19_6";
			this->d19_6->Size = System::Drawing::Size(116, 20);
			this->d19_6->TabIndex = 90;
			this->d19_6->Text = L"INC";
			this->d19_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_5
			// 
			this->d19_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d19_5->Location = System::Drawing::Point(913, 269);
			this->d19_5->Name = L"d19_5";
			this->d19_5->Size = System::Drawing::Size(116, 20);
			this->d19_5->TabIndex = 89;
			this->d19_5->Text = L"INC";
			this->d19_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_4
			// 
			this->d19_4->Location = System::Drawing::Point(738, 269);
			this->d19_4->Name = L"d19_4";
			this->d19_4->Size = System::Drawing::Size(116, 20);
			this->d19_4->TabIndex = 88;
			this->d19_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_3
			// 
			this->d19_3->Location = System::Drawing::Point(615, 269);
			this->d19_3->Name = L"d19_3";
			this->d19_3->Size = System::Drawing::Size(116, 20);
			this->d19_3->TabIndex = 87;
			this->d19_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_2
			// 
			this->d19_2->Location = System::Drawing::Point(491, 269);
			this->d19_2->Name = L"d19_2";
			this->d19_2->Size = System::Drawing::Size(116, 20);
			this->d19_2->TabIndex = 86;
			this->d19_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d19_1
			// 
			this->d19_1->Location = System::Drawing::Point(367, 269);
			this->d19_1->Name = L"d19_1";
			this->d19_1->Size = System::Drawing::Size(116, 20);
			this->d19_1->TabIndex = 85;
			this->d19_1->Text = L"10;10";
			this->d19_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_label
			// 
			this->vwa_label->AutoSize = true;
			this->vwa_label->Location = System::Drawing::Point(315, 298);
			this->vwa_label->Name = L"vwa_label";
			this->vwa_label->Size = System::Drawing::Size(27, 12);
			this->vwa_label->TabIndex = 100;
			this->vwa_label->Text = L"vWA";
			// 
			// vwa_7
			// 
			this->vwa_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->vwa_7->Location = System::Drawing::Point(1161, 295);
			this->vwa_7->Name = L"vwa_7";
			this->vwa_7->Size = System::Drawing::Size(116, 20);
			this->vwa_7->TabIndex = 99;
			this->vwa_7->Text = L"INC";
			this->vwa_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_6
			// 
			this->vwa_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->vwa_6->Location = System::Drawing::Point(1037, 295);
			this->vwa_6->Name = L"vwa_6";
			this->vwa_6->Size = System::Drawing::Size(116, 20);
			this->vwa_6->TabIndex = 98;
			this->vwa_6->Text = L"INC";
			this->vwa_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_5
			// 
			this->vwa_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->vwa_5->Location = System::Drawing::Point(913, 295);
			this->vwa_5->Name = L"vwa_5";
			this->vwa_5->Size = System::Drawing::Size(116, 20);
			this->vwa_5->TabIndex = 97;
			this->vwa_5->Text = L"INC";
			this->vwa_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_4
			// 
			this->vwa_4->Location = System::Drawing::Point(738, 295);
			this->vwa_4->Name = L"vwa_4";
			this->vwa_4->Size = System::Drawing::Size(116, 20);
			this->vwa_4->TabIndex = 96;
			this->vwa_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_3
			// 
			this->vwa_3->Location = System::Drawing::Point(615, 295);
			this->vwa_3->Name = L"vwa_3";
			this->vwa_3->Size = System::Drawing::Size(116, 20);
			this->vwa_3->TabIndex = 95;
			this->vwa_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_2
			// 
			this->vwa_2->Location = System::Drawing::Point(491, 295);
			this->vwa_2->Name = L"vwa_2";
			this->vwa_2->Size = System::Drawing::Size(116, 20);
			this->vwa_2->TabIndex = 94;
			this->vwa_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// vwa_1
			// 
			this->vwa_1->Location = System::Drawing::Point(367, 295);
			this->vwa_1->Name = L"vwa_1";
			this->vwa_1->Size = System::Drawing::Size(116, 20);
			this->vwa_1->TabIndex = 93;
			this->vwa_1->Text = L"10;10";
			this->vwa_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_label
			// 
			this->tpox_label->AutoSize = true;
			this->tpox_label->Location = System::Drawing::Point(315, 324);
			this->tpox_label->Name = L"tpox_label";
			this->tpox_label->Size = System::Drawing::Size(37, 12);
			this->tpox_label->TabIndex = 108;
			this->tpox_label->Text = L"TPOX";
			// 
			// tpox_7
			// 
			this->tpox_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->tpox_7->Location = System::Drawing::Point(1161, 321);
			this->tpox_7->Name = L"tpox_7";
			this->tpox_7->Size = System::Drawing::Size(116, 20);
			this->tpox_7->TabIndex = 107;
			this->tpox_7->Text = L"INC";
			this->tpox_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_6
			// 
			this->tpox_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->tpox_6->Location = System::Drawing::Point(1037, 321);
			this->tpox_6->Name = L"tpox_6";
			this->tpox_6->Size = System::Drawing::Size(116, 20);
			this->tpox_6->TabIndex = 106;
			this->tpox_6->Text = L"INC";
			this->tpox_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_5
			// 
			this->tpox_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->tpox_5->Location = System::Drawing::Point(913, 321);
			this->tpox_5->Name = L"tpox_5";
			this->tpox_5->Size = System::Drawing::Size(116, 20);
			this->tpox_5->TabIndex = 105;
			this->tpox_5->Text = L"INC";
			this->tpox_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_4
			// 
			this->tpox_4->Location = System::Drawing::Point(738, 321);
			this->tpox_4->Name = L"tpox_4";
			this->tpox_4->Size = System::Drawing::Size(116, 20);
			this->tpox_4->TabIndex = 104;
			this->tpox_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_3
			// 
			this->tpox_3->Location = System::Drawing::Point(615, 321);
			this->tpox_3->Name = L"tpox_3";
			this->tpox_3->Size = System::Drawing::Size(116, 20);
			this->tpox_3->TabIndex = 103;
			this->tpox_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_2
			// 
			this->tpox_2->Location = System::Drawing::Point(491, 321);
			this->tpox_2->Name = L"tpox_2";
			this->tpox_2->Size = System::Drawing::Size(116, 20);
			this->tpox_2->TabIndex = 102;
			this->tpox_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tpox_1
			// 
			this->tpox_1->Location = System::Drawing::Point(367, 321);
			this->tpox_1->Name = L"tpox_1";
			this->tpox_1->Size = System::Drawing::Size(116, 20);
			this->tpox_1->TabIndex = 101;
			this->tpox_1->Text = L"10;10";
			this->tpox_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_label
			// 
			this->d18_label->AutoSize = true;
			this->d18_label->Location = System::Drawing::Point(315, 350);
			this->d18_label->Name = L"d18_label";
			this->d18_label->Size = System::Drawing::Size(23, 12);
			this->d18_label->TabIndex = 116;
			this->d18_label->Text = L"D18";
			// 
			// d18_7
			// 
			this->d18_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d18_7->Location = System::Drawing::Point(1161, 347);
			this->d18_7->Name = L"d18_7";
			this->d18_7->Size = System::Drawing::Size(116, 20);
			this->d18_7->TabIndex = 115;
			this->d18_7->Text = L"INC";
			this->d18_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_6
			// 
			this->d18_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d18_6->Location = System::Drawing::Point(1037, 347);
			this->d18_6->Name = L"d18_6";
			this->d18_6->Size = System::Drawing::Size(116, 20);
			this->d18_6->TabIndex = 114;
			this->d18_6->Text = L"INC";
			this->d18_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_5
			// 
			this->d18_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d18_5->Location = System::Drawing::Point(913, 347);
			this->d18_5->Name = L"d18_5";
			this->d18_5->Size = System::Drawing::Size(116, 20);
			this->d18_5->TabIndex = 113;
			this->d18_5->Text = L"INC";
			this->d18_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_4
			// 
			this->d18_4->Location = System::Drawing::Point(738, 347);
			this->d18_4->Name = L"d18_4";
			this->d18_4->Size = System::Drawing::Size(116, 20);
			this->d18_4->TabIndex = 112;
			this->d18_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_3
			// 
			this->d18_3->Location = System::Drawing::Point(615, 347);
			this->d18_3->Name = L"d18_3";
			this->d18_3->Size = System::Drawing::Size(116, 20);
			this->d18_3->TabIndex = 111;
			this->d18_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_2
			// 
			this->d18_2->Location = System::Drawing::Point(491, 347);
			this->d18_2->Name = L"d18_2";
			this->d18_2->Size = System::Drawing::Size(116, 20);
			this->d18_2->TabIndex = 110;
			this->d18_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d18_1
			// 
			this->d18_1->Location = System::Drawing::Point(367, 347);
			this->d18_1->Name = L"d18_1";
			this->d18_1->Size = System::Drawing::Size(116, 20);
			this->d18_1->TabIndex = 109;
			this->d18_1->Text = L"10;10";
			this->d18_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_label
			// 
			this->d5_label->AutoSize = true;
			this->d5_label->Location = System::Drawing::Point(315, 376);
			this->d5_label->Name = L"d5_label";
			this->d5_label->Size = System::Drawing::Size(19, 12);
			this->d5_label->TabIndex = 124;
			this->d5_label->Text = L"D5";
			// 
			// d5_7
			// 
			this->d5_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d5_7->Location = System::Drawing::Point(1161, 373);
			this->d5_7->Name = L"d5_7";
			this->d5_7->Size = System::Drawing::Size(116, 20);
			this->d5_7->TabIndex = 123;
			this->d5_7->Text = L"INC";
			this->d5_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_6
			// 
			this->d5_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d5_6->Location = System::Drawing::Point(1037, 373);
			this->d5_6->Name = L"d5_6";
			this->d5_6->Size = System::Drawing::Size(116, 20);
			this->d5_6->TabIndex = 122;
			this->d5_6->Text = L"INC";
			this->d5_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_5
			// 
			this->d5_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->d5_5->Location = System::Drawing::Point(913, 373);
			this->d5_5->Name = L"d5_5";
			this->d5_5->Size = System::Drawing::Size(116, 20);
			this->d5_5->TabIndex = 121;
			this->d5_5->Text = L"INC";
			this->d5_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_4
			// 
			this->d5_4->Location = System::Drawing::Point(738, 373);
			this->d5_4->Name = L"d5_4";
			this->d5_4->Size = System::Drawing::Size(116, 20);
			this->d5_4->TabIndex = 120;
			this->d5_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_3
			// 
			this->d5_3->Location = System::Drawing::Point(615, 373);
			this->d5_3->Name = L"d5_3";
			this->d5_3->Size = System::Drawing::Size(116, 20);
			this->d5_3->TabIndex = 119;
			this->d5_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_2
			// 
			this->d5_2->Location = System::Drawing::Point(491, 373);
			this->d5_2->Name = L"d5_2";
			this->d5_2->Size = System::Drawing::Size(116, 20);
			this->d5_2->TabIndex = 118;
			this->d5_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d5_1
			// 
			this->d5_1->Location = System::Drawing::Point(367, 373);
			this->d5_1->Name = L"d5_1";
			this->d5_1->Size = System::Drawing::Size(116, 20);
			this->d5_1->TabIndex = 117;
			this->d5_1->Text = L"10;10";
			this->d5_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_label
			// 
			this->fga_label->AutoSize = true;
			this->fga_label->Location = System::Drawing::Point(315, 402);
			this->fga_label->Name = L"fga_label";
			this->fga_label->Size = System::Drawing::Size(27, 12);
			this->fga_label->TabIndex = 132;
			this->fga_label->Text = L"FGA";
			// 
			// fga_7
			// 
			this->fga_7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->fga_7->Location = System::Drawing::Point(1161, 399);
			this->fga_7->Name = L"fga_7";
			this->fga_7->Size = System::Drawing::Size(116, 20);
			this->fga_7->TabIndex = 131;
			this->fga_7->Text = L"INC";
			this->fga_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_6
			// 
			this->fga_6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->fga_6->Location = System::Drawing::Point(1037, 399);
			this->fga_6->Name = L"fga_6";
			this->fga_6->Size = System::Drawing::Size(116, 20);
			this->fga_6->TabIndex = 130;
			this->fga_6->Text = L"INC";
			this->fga_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_5
			// 
			this->fga_5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->fga_5->Location = System::Drawing::Point(913, 399);
			this->fga_5->Name = L"fga_5";
			this->fga_5->Size = System::Drawing::Size(116, 20);
			this->fga_5->TabIndex = 129;
			this->fga_5->Text = L"INC";
			this->fga_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_4
			// 
			this->fga_4->Location = System::Drawing::Point(738, 399);
			this->fga_4->Name = L"fga_4";
			this->fga_4->Size = System::Drawing::Size(116, 20);
			this->fga_4->TabIndex = 128;
			this->fga_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_3
			// 
			this->fga_3->Location = System::Drawing::Point(615, 399);
			this->fga_3->Name = L"fga_3";
			this->fga_3->Size = System::Drawing::Size(116, 20);
			this->fga_3->TabIndex = 127;
			this->fga_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_2
			// 
			this->fga_2->Location = System::Drawing::Point(491, 399);
			this->fga_2->Name = L"fga_2";
			this->fga_2->Size = System::Drawing::Size(116, 20);
			this->fga_2->TabIndex = 126;
			this->fga_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fga_1
			// 
			this->fga_1->Location = System::Drawing::Point(367, 399);
			this->fga_1->Name = L"fga_1";
			this->fga_1->Size = System::Drawing::Size(116, 20);
			this->fga_1->TabIndex = 125;
			this->fga_1->Text = L"30;30";
			this->fga_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// generate_files_button
			// 
			this->generate_files_button->Location = System::Drawing::Point(11, 346);
			this->generate_files_button->Name = L"generate_files_button";
			this->generate_files_button->Size = System::Drawing::Size(199, 23);
			this->generate_files_button->TabIndex = 133;
			this->generate_files_button->Text = L"Generate Files";
			this->generate_files_button->UseVisualStyleBackColor = true;
			this->generate_files_button->Click += gcnew System::EventHandler(this, &MyForm::generate_files_button_Click);
			// 
			// run_LAST_button
			// 
			this->run_LAST_button->Enabled = false;
			this->run_LAST_button->Location = System::Drawing::Point(11, 404);
			this->run_LAST_button->Name = L"run_LAST_button";
			this->run_LAST_button->Size = System::Drawing::Size(200, 23);
			this->run_LAST_button->TabIndex = 134;
			this->run_LAST_button->Text = L"Run LAST";
			this->run_LAST_button->UseVisualStyleBackColor = true;
			this->run_LAST_button->Click += gcnew System::EventHandler(this, &MyForm::run_LAST_button_Click);
			// 
			// run_LAST_Express_button
			// 
			this->run_LAST_Express_button->Enabled = false;
			this->run_LAST_Express_button->Location = System::Drawing::Point(10, 375);
			this->run_LAST_Express_button->Name = L"run_LAST_Express_button";
			this->run_LAST_Express_button->Size = System::Drawing::Size(200, 23);
			this->run_LAST_Express_button->TabIndex = 135;
			this->run_LAST_Express_button->Text = L"Run LAST Express";
			this->run_LAST_Express_button->UseVisualStyleBackColor = true;
			this->run_LAST_Express_button->Click += gcnew System::EventHandler(this, &MyForm::run_LAST_Express_button_Click);
			// 
			// known1_pd
			// 
			this->known1_pd->AutoSize = true;
			this->known1_pd->Location = System::Drawing::Point(15, 143);
			this->known1_pd->Name = L"known1_pd";
			this->known1_pd->Size = System::Drawing::Size(80, 16);
			this->known1_pd->TabIndex = 136;
			this->known1_pd->Text = L"Known 1 Pd";
			this->known1_pd->UseVisualStyleBackColor = true;
			this->known1_pd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::known1_pd_CheckedChanged);
			// 
			// known2_pd
			// 
			this->known2_pd->AutoSize = true;
			this->known2_pd->Location = System::Drawing::Point(15, 164);
			this->known2_pd->Name = L"known2_pd";
			this->known2_pd->Size = System::Drawing::Size(81, 16);
			this->known2_pd->TabIndex = 137;
			this->known2_pd->Text = L"Known 2 Pd";
			this->known2_pd->UseVisualStyleBackColor = true;
			this->known2_pd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::known2_pd_CheckedChanged);
			// 
			// known3_pd
			// 
			this->known3_pd->AutoSize = true;
			this->known3_pd->Location = System::Drawing::Point(15, 186);
			this->known3_pd->Name = L"known3_pd";
			this->known3_pd->Size = System::Drawing::Size(81, 16);
			this->known3_pd->TabIndex = 138;
			this->known3_pd->Text = L"Known 3 Pd";
			this->known3_pd->UseVisualStyleBackColor = true;
			this->known3_pd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::known3_pd_CheckedChanged);
			// 
			// known4_pd
			// 
			this->known4_pd->AutoSize = true;
			this->known4_pd->Location = System::Drawing::Point(14, 208);
			this->known4_pd->Name = L"known4_pd";
			this->known4_pd->Size = System::Drawing::Size(81, 16);
			this->known4_pd->TabIndex = 139;
			this->known4_pd->Text = L"Known 4 Pd";
			this->known4_pd->UseVisualStyleBackColor = true;
			this->known4_pd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::known4_pd_CheckedChanged);
			// 
			// clear
			// 
			this->clear->Enabled = false;
			this->clear->Location = System::Drawing::Point(10, 317);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(200, 23);
			this->clear->TabIndex = 140;
			this->clear->Text = L"Clear";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// copyright
			// 
			this->copyright->AutoSize = true;
			this->copyright->Location = System::Drawing::Point(510, 430);
			this->copyright->Name = L"copyright";
			this->copyright->Size = System::Drawing::Size(199, 12);
			this->copyright->TabIndex = 141;
			this->copyright->Text = L"Copyright (C) 2015 Munieshwar Ramdass";
			// 
			// directory
			// 
			this->directory->AutoSize = true;
			this->directory->Location = System::Drawing::Point(14, 295);
			this->directory->Name = L"directory";
			this->directory->Size = System::Drawing::Size(49, 12);
			this->directory->TabIndex = 142;
			this->directory->Text = L"Directory";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 451);
			this->Controls->Add(this->directory);
			this->Controls->Add(this->copyright);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->known4_pd);
			this->Controls->Add(this->known3_pd);
			this->Controls->Add(this->known2_pd);
			this->Controls->Add(this->known1_pd);
			this->Controls->Add(this->run_LAST_Express_button);
			this->Controls->Add(this->run_LAST_button);
			this->Controls->Add(this->generate_files_button);
			this->Controls->Add(this->fga_label);
			this->Controls->Add(this->fga_7);
			this->Controls->Add(this->fga_6);
			this->Controls->Add(this->fga_5);
			this->Controls->Add(this->fga_4);
			this->Controls->Add(this->fga_3);
			this->Controls->Add(this->fga_2);
			this->Controls->Add(this->fga_1);
			this->Controls->Add(this->d5_label);
			this->Controls->Add(this->d5_7);
			this->Controls->Add(this->d5_6);
			this->Controls->Add(this->d5_5);
			this->Controls->Add(this->d5_4);
			this->Controls->Add(this->d5_3);
			this->Controls->Add(this->d5_2);
			this->Controls->Add(this->d5_1);
			this->Controls->Add(this->d18_label);
			this->Controls->Add(this->d18_7);
			this->Controls->Add(this->d18_6);
			this->Controls->Add(this->d18_5);
			this->Controls->Add(this->d18_4);
			this->Controls->Add(this->d18_3);
			this->Controls->Add(this->d18_2);
			this->Controls->Add(this->d18_1);
			this->Controls->Add(this->tpox_label);
			this->Controls->Add(this->tpox_7);
			this->Controls->Add(this->tpox_6);
			this->Controls->Add(this->tpox_5);
			this->Controls->Add(this->tpox_4);
			this->Controls->Add(this->tpox_3);
			this->Controls->Add(this->tpox_2);
			this->Controls->Add(this->tpox_1);
			this->Controls->Add(this->vwa_label);
			this->Controls->Add(this->vwa_7);
			this->Controls->Add(this->vwa_6);
			this->Controls->Add(this->vwa_5);
			this->Controls->Add(this->vwa_4);
			this->Controls->Add(this->vwa_3);
			this->Controls->Add(this->vwa_2);
			this->Controls->Add(this->vwa_1);
			this->Controls->Add(this->d19_label);
			this->Controls->Add(this->d19_7);
			this->Controls->Add(this->d19_6);
			this->Controls->Add(this->d19_5);
			this->Controls->Add(this->d19_4);
			this->Controls->Add(this->d19_3);
			this->Controls->Add(this->d19_2);
			this->Controls->Add(this->d19_1);
			this->Controls->Add(this->d2_label);
			this->Controls->Add(this->d2_7);
			this->Controls->Add(this->d2_6);
			this->Controls->Add(this->d2_5);
			this->Controls->Add(this->d2_4);
			this->Controls->Add(this->d2_3);
			this->Controls->Add(this->d2_2);
			this->Controls->Add(this->d2_1);
			this->Controls->Add(this->d16_label);
			this->Controls->Add(this->d16_7);
			this->Controls->Add(this->d16_6);
			this->Controls->Add(this->d16_5);
			this->Controls->Add(this->d16_4);
			this->Controls->Add(this->d16_3);
			this->Controls->Add(this->d16_2);
			this->Controls->Add(this->d16_1);
			this->Controls->Add(this->d13_label);
			this->Controls->Add(this->d13_7);
			this->Controls->Add(this->d13_6);
			this->Controls->Add(this->d13_5);
			this->Controls->Add(this->d13_4);
			this->Controls->Add(this->d13_3);
			this->Controls->Add(this->d13_2);
			this->Controls->Add(this->d13_1);
			this->Controls->Add(this->th01_label);
			this->Controls->Add(this->th01_7);
			this->Controls->Add(this->th01_6);
			this->Controls->Add(this->th01_5);
			this->Controls->Add(this->th01_4);
			this->Controls->Add(this->th01_3);
			this->Controls->Add(this->th01_2);
			this->Controls->Add(this->th01_1);
			this->Controls->Add(this->d3_label);
			this->Controls->Add(this->d3_7);
			this->Controls->Add(this->d3_6);
			this->Controls->Add(this->d3_5);
			this->Controls->Add(this->d3_4);
			this->Controls->Add(this->d3_3);
			this->Controls->Add(this->d3_2);
			this->Controls->Add(this->d3_1);
			this->Controls->Add(this->csf_label);
			this->Controls->Add(this->csf_7);
			this->Controls->Add(this->csf_6);
			this->Controls->Add(this->csf_5);
			this->Controls->Add(this->csf_4);
			this->Controls->Add(this->csf_3);
			this->Controls->Add(this->csf_2);
			this->Controls->Add(this->csf_1);
			this->Controls->Add(this->d7_label);
			this->Controls->Add(this->d7_7);
			this->Controls->Add(this->d7_6);
			this->Controls->Add(this->d7_5);
			this->Controls->Add(this->d7_4);
			this->Controls->Add(this->d7_3);
			this->Controls->Add(this->d7_2);
			this->Controls->Add(this->d7_1);
			this->Controls->Add(this->d21_label);
			this->Controls->Add(this->d21_7);
			this->Controls->Add(this->d21_6);
			this->Controls->Add(this->d21_5);
			this->Controls->Add(this->d21_4);
			this->Controls->Add(this->d21_3);
			this->Controls->Add(this->d21_2);
			this->Controls->Add(this->d21_1);
			this->Controls->Add(this->d8_label);
			this->Controls->Add(this->replicate_3_label);
			this->Controls->Add(this->replicate_2_label);
			this->Controls->Add(this->replicate_1_label);
			this->Controls->Add(this->d8_7);
			this->Controls->Add(this->d8_6);
			this->Controls->Add(this->d8_5);
			this->Controls->Add(this->d8_4);
			this->Controls->Add(this->d8_3);
			this->Controls->Add(this->d8_2);
			this->Controls->Add(this->d8_1);
			this->Controls->Add(this->known_4_label);
			this->Controls->Add(this->known_3_label);
			this->Controls->Add(this->known_2_label);
			this->Controls->Add(this->known_1_label);
			this->Controls->Add(this->quant_label);
			this->Controls->Add(this->quant);
			this->Controls->Add(this->contributor_label);
			this->Controls->Add(this->contributors);
			this->Controls->Add(this->deducible);
			this->Controls->Add(this->case_name);
			this->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"Legal Aid Statistic Tool (LAST)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contributors))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quant))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void known4_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void known3_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void known2_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void known1_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e);

	private: System::Void MyForm::contributors_TextChanged(System::Object^  sender, System::EventArgs^  e);

	private: System::Void run_LAST_Express_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void run_LAST_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void generate_files_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e);
	
};
}
