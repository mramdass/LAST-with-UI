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

#include "MyForm.h"
#include "File_Generator.h"
#include <direct.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <algorithm>
//#include <unistd.h>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace LAST_Interfacev2;
using namespace File_Generator;

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

System::Void MyForm::known4_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {}
System::Void MyForm::known3_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {}
System::Void MyForm::known2_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {}
System::Void MyForm::known1_pd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {}

System::Void MyForm::contributors_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (contributors->Text == "4") {
		known4_pd->Enabled = true;
		known4_pd->Enabled = true;
		known4_pd->Enabled = true;
		known4_pd->Enabled = true;

		d8_2->Enabled = true; d8_3->Enabled = true; d8_4->Enabled = true;
		d21_2->Enabled = true; d21_3->Enabled = true; d21_4->Enabled = true;
		d7_2->Enabled = true; d7_3->Enabled = true; d7_4->Enabled = true;
		csf_2->Enabled = true; csf_3->Enabled = true; csf_4->Enabled = true;
		d3_2->Enabled = true; d3_3->Enabled = true; d3_4->Enabled = true;
		th01_2->Enabled = true; th01_3->Enabled = true; th01_4->Enabled = true;
		d13_2->Enabled = true; d13_3->Enabled = true; d13_4->Enabled = true;
		d16_2->Enabled = true; d16_3->Enabled = true; d16_4->Enabled = true;
		d2_2->Enabled = true; d2_3->Enabled = true; d2_4->Enabled = true;
		d19_2->Enabled = true; d19_3->Enabled = true; d19_4->Enabled = true;
		vwa_2->Enabled = true; vwa_3->Enabled = true; vwa_4->Enabled = true;
		tpox_2->Enabled = true; tpox_3->Enabled = true; tpox_4->Enabled = true;
		d18_2->Enabled = true; d18_3->Enabled = true; d18_4->Enabled = true;
		d5_2->Enabled = true; d5_3->Enabled = true; d5_4->Enabled = true;
		fga_2->Enabled = true; fga_3->Enabled = true; fga_4->Enabled = true;
	}
	else if (contributors->Text == "3") {
		known1_pd->Enabled = true;
		known2_pd->Enabled = true;
		known3_pd->Enabled = true;
		known4_pd->Enabled = false;

		d8_2->Enabled = true; d8_3->Enabled = true; d8_4->Enabled = false;
		d21_2->Enabled = true; d21_3->Enabled = true; d21_4->Enabled = false;
		d7_2->Enabled = true; d7_3->Enabled = true; d7_4->Enabled = false;
		csf_2->Enabled = true; csf_3->Enabled = true; csf_4->Enabled = false;
		d3_2->Enabled = true; d3_3->Enabled = true; d3_4->Enabled = false;
		th01_2->Enabled = true; th01_3->Enabled = true; th01_4->Enabled = false;
		d13_2->Enabled = true; d13_3->Enabled = true; d13_4->Enabled = false;
		d16_2->Enabled = true; d16_3->Enabled = true; d16_4->Enabled = false;
		d2_2->Enabled = true; d2_3->Enabled = true; d2_4->Enabled = false;
		d19_2->Enabled = true; d19_3->Enabled = true; d19_4->Enabled = false;
		vwa_2->Enabled = true; vwa_3->Enabled = true; vwa_4->Enabled = false;
		tpox_2->Enabled = true; tpox_3->Enabled = true; tpox_4->Enabled = false;
		d18_2->Enabled = true; d18_3->Enabled = true; d18_4->Enabled = false;
		d5_2->Enabled = true; d5_3->Enabled = true; d5_4->Enabled = false;
		fga_2->Enabled = true; fga_3->Enabled = true; fga_4->Enabled = false;

		d8_4->Text = "";
		d21_4->Text = "";
		d7_4->Text = "";
		csf_4->Text = "";
		d3_4->Text = "";
		th01_4->Text = "";
		d13_4->Text = "";
		d16_4->Text = "";
		d2_4->Text = "";
		d19_4->Text = "";
		vwa_4->Text = "";
		tpox_4->Text = "";
		d18_4->Text = "";
		d5_4->Text = "";
		fga_4->Text = "";
	}
	else if (contributors->Text == "2") {
		known1_pd->Enabled = true;
		known2_pd->Enabled = true;
		known3_pd->Enabled = false;
		known4_pd->Enabled = false;

		d8_2->Enabled = true; d8_3->Enabled = false; d8_4->Enabled = false;
		d21_2->Enabled = true; d21_3->Enabled = false; d21_4->Enabled = false;
		d7_2->Enabled = true; d7_3->Enabled = false; d7_4->Enabled = false;
		csf_2->Enabled = true; csf_3->Enabled = false; csf_4->Enabled = false;
		d3_2->Enabled = true; d3_3->Enabled = false; d3_4->Enabled = false;
		th01_2->Enabled = true; th01_3->Enabled = false; th01_4->Enabled = false;
		d13_2->Enabled = true; d13_3->Enabled = false; d13_4->Enabled = false;
		d16_2->Enabled = true; d16_3->Enabled = false; d16_4->Enabled = false;
		d2_2->Enabled = true; d2_3->Enabled = false; d2_4->Enabled = false;
		d19_2->Enabled = true; d19_3->Enabled = false; d19_4->Enabled = false;
		vwa_2->Enabled = true; vwa_3->Enabled = false; vwa_4->Enabled = false;
		tpox_2->Enabled = true; tpox_3->Enabled = false; tpox_4->Enabled = false;
		d18_2->Enabled = true; d18_3->Enabled = false; d18_4->Enabled = false;
		d5_2->Enabled = true; d5_3->Enabled = false; d5_4->Enabled = false;
		fga_2->Enabled = true; fga_3->Enabled = false; fga_4->Enabled = false;

		d8_3->Text = ""; d8_4->Text = "";
		d21_3->Text = ""; d21_4->Text = "";
		d7_3->Text = ""; d7_4->Text = "";
		csf_3->Text = ""; csf_4->Text = "";
		d3_3->Text = ""; d3_4->Text = "";
		th01_3->Text = ""; th01_4->Text = "";
		d13_3->Text = ""; d13_4->Text = "";
		d16_3->Text = ""; d16_4->Text = "";
		d2_3->Text = ""; d2_4->Text = "";
		d19_3->Text = ""; d19_4->Text = "";
		vwa_3->Text = ""; vwa_4->Text = "";
		tpox_3->Text = ""; tpox_4->Text = "";
		d18_3->Text = ""; d18_4->Text = "";
		d5_3->Text = ""; d5_4->Text = "";
		fga_3->Text = ""; fga_4->Text = "";
	}
	else if (contributors->Text == "1") {
		deducible->Checked = true;

		known1_pd->Enabled = true;
		known2_pd->Enabled = false;
		known3_pd->Enabled = false;
		known4_pd->Enabled = false;

		d8_2->Enabled = false; d8_3->Enabled = false; d8_4->Enabled = false;
		d21_2->Enabled = false; d21_3->Enabled = false; d21_4->Enabled = false;
		d7_2->Enabled = false; d7_3->Enabled = false; d7_4->Enabled = false;
		csf_2->Enabled = false; csf_3->Enabled = false; csf_4->Enabled = false;
		d3_2->Enabled = false; d3_3->Enabled = false; d3_4->Enabled = false;
		th01_2->Enabled = false; th01_3->Enabled = false; th01_4->Enabled = false;
		d13_2->Enabled = false; d13_3->Enabled = false; d13_4->Enabled = false;
		d16_2->Enabled = false; d16_3->Enabled = false; d16_4->Enabled = false;
		d2_2->Enabled = false; d2_3->Enabled = false; d2_4->Enabled = false;
		d19_2->Enabled = false; d19_3->Enabled = false; d19_4->Enabled = false;
		vwa_2->Enabled = false; vwa_3->Enabled = false; vwa_4->Enabled = false;
		tpox_2->Enabled = false; tpox_3->Enabled = false; tpox_4->Enabled = false;
		d18_2->Enabled = false; d18_3->Enabled = false; d18_4->Enabled = false;
		d5_2->Enabled = false; d5_3->Enabled = false; d5_4->Enabled = false;
		fga_2->Enabled = false; fga_3->Enabled = false; fga_4->Enabled = false;

		d8_2->Text = ""; d8_3->Text = ""; d8_4->Text = "";
		d21_2->Text = ""; d21_3->Text = ""; d21_4->Text = "";
		d7_2->Text = ""; d7_3->Text = ""; d7_4->Text = "";
		csf_2->Text = ""; csf_3->Text = ""; csf_4->Text = "";
		d3_2->Text = ""; d3_3->Text = ""; d3_4->Text = "";
		th01_2->Text = ""; th01_3->Text = ""; th01_4->Text = "";
		d13_2->Text = ""; d13_3->Text = ""; d13_4->Text = "";
		d16_2->Text = ""; d16_3->Text = ""; d16_4->Text = "";
		d2_2->Text = ""; d2_3->Text = ""; d2_4->Text = "";
		d19_2->Text = ""; d19_3->Text = ""; d19_4->Text = "";
		vwa_2->Text = ""; vwa_3->Text = ""; vwa_4->Text = "";
		tpox_2->Text = ""; tpox_3->Text = ""; tpox_4->Text = "";
		d18_2->Text = ""; d18_3->Text = ""; d18_4->Text = "";
		d5_2->Text = ""; d5_3->Text = ""; d5_4->Text = "";
		fga_2->Text = ""; fga_3->Text = ""; fga_4->Text = "";
	}
}

System::Void MyForm::clear_Click(System::Object^  sender, System::EventArgs^  e) {
	generate_files_button->Enabled = true;
	run_LAST_button->Enabled = false;
	run_LAST_Express_button->Enabled = false;
	known1_pd->Checked = false;
	known2_pd->Checked = false;
	known3_pd->Checked = false;
	known4_pd->Checked = false;
	case_name->Text = "Case Name";
	deducible->Checked = false;
	clear->Enabled = false;
}
System::Void MyForm::run_LAST_Express_button_Click(System::Object^  sender, System::EventArgs^  e) {
	run_LAST_button->Text = "Running LAST";

	run_LAST_button->Enabled = false;
	run_LAST_Express_button->Enabled = false;

	STARTUPINFO info = { sizeof(info) };
	PROCESS_INFORMATION processInfo;
	string file = msclr::interop::marshal_as<std::string>(directory->Text);
	_chdir(file.c_str());

	if (CreateProcess(L"LASTv4_Express.exe", NULL, NULL, NULL, TRUE, 0, NULL, NULL, &info, &processInfo)) {
		//::WaitForSingleObject(processInfo.hProcess, INFINITE);
		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);
	}

	_chdir("..");

	clear->Enabled = true;
}
System::Void MyForm::run_LAST_button_Click(System::Object^  sender, System::EventArgs^  e) {
	run_LAST_button->Text = "Running LAST";
	
	run_LAST_button->Enabled = false;
	run_LAST_Express_button->Enabled = false;

	STARTUPINFO info = { sizeof(info) };
	PROCESS_INFORMATION processInfo;
	string file = msclr::interop::marshal_as<std::string>(directory->Text);
	_chdir(file.c_str());

	if (CreateProcess(L"LASTv4.exe", NULL, NULL, NULL, TRUE, 0, NULL, NULL, &info, &processInfo)) {
		//::WaitForSingleObject(processInfo.hProcess, INFINITE);
		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);
	}

	_chdir("..");
	
	clear->Enabled = true;
}

System::Void MyForm::generate_files_button_Click(System::Object^  sender, System::EventArgs^  e) {
	
	ofstream ofs("case.csv");
	// Write Header Information
	ofs << "Case Name,Locus,Contributors,D/ND,Quant,Known Pn";
	string str = "";
	if (d8_2->Text != gcnew String(str.c_str()))
		ofs << ",Known Pn";
	if (d8_3->Text != gcnew String(str.c_str()))
		ofs << ",Known Pn";
	if (d8_4->Text != gcnew String(str.c_str()))
		ofs << ",Known Pn";
	if (known1_pd->Checked == true)
		ofs << ",Known Pd";
	if (known2_pd->Checked == true)
		ofs << ",Known Pd";
	if (known3_pd->Checked == true)
		ofs << ",Known Pd";
	if (known4_pd->Checked == true)
		ofs << ",Known Pd";
	ofs << ",REP,REP,REP" << endl;

	// Write D8 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d8_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d8_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_1->Text);
	if (d8_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_2->Text);
	if (d8_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_3->Text);
	if (d8_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_4->Text);
	if (d8_5->Text == gcnew String(str.c_str()) || d8_5->Text == "INC")
		ofs << ",INC";
	else if (d8_5->Text == "NEG" || d8_5->Text == "neg" || d8_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_5->Text);
	if (d8_6->Text == gcnew String(str.c_str()) || d8_6->Text == "INC")
		ofs << ",INC";
	else if (d8_6->Text == "NEG" || d8_6->Text == "neg" || d8_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_6->Text);
	if (d8_7->Text == gcnew String(str.c_str()) || d8_7->Text == "INC")
		ofs << ",INC";
	else if (d8_7->Text == "NEG" || d8_7->Text == "neg" || d8_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d8_7->Text);
	ofs << endl;

	// Write d21 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d21_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d21_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_1->Text);
	if (d21_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_2->Text);
	if (d21_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_3->Text);
	if (d21_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_4->Text);
	if (d21_5->Text == gcnew String(str.c_str()) || d21_5->Text == "INC")
		ofs << ",INC";
	else if (d21_5->Text == "NEG" || d21_5->Text == "neg" || d21_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_5->Text);
	if (d21_6->Text == gcnew String(str.c_str()) || d21_6->Text == "INC")
		ofs << ",INC";
	else if (d21_6->Text == "NEG" || d21_6->Text == "neg" || d21_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_6->Text);
	if (d21_7->Text == gcnew String(str.c_str()) || d21_7->Text == "INC")
		ofs << ",INC";
	else if (d21_7->Text == "NEG" || d21_7->Text == "neg" || d21_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d21_7->Text);
	ofs << endl;

	// Write d7 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d7_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d7_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_1->Text);
	if (d7_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_2->Text);
	if (d7_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_3->Text);
	if (d7_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_4->Text);
	if (d7_5->Text == gcnew String(str.c_str()) || d7_5->Text == "INC")
		ofs << ",INC";
	else if (d7_5->Text == "NEG" || d7_5->Text == "neg" || d7_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_5->Text);
	if (d7_6->Text == gcnew String(str.c_str()) || d7_6->Text == "INC")
		ofs << ",INC";
	else if (d7_6->Text == "NEG" || d7_6->Text == "neg" || d7_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_6->Text);
	if (d7_7->Text == gcnew String(str.c_str()) || d7_7->Text == "INC")
		ofs << ",INC";
	else if (d7_7->Text == "NEG" || d7_7->Text == "neg" || d7_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d7_7->Text);
	ofs << endl;

	// Write csf Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(csf_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (csf_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_1->Text);
	if (csf_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_2->Text);
	if (csf_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_3->Text);
	if (csf_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_4->Text);
	if (csf_5->Text == gcnew String(str.c_str()) || csf_5->Text == "INC")
		ofs << ",INC";
	else if (csf_5->Text == "NEG" || csf_5->Text == "neg" || csf_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_5->Text);
	if (csf_6->Text == gcnew String(str.c_str()) || csf_6->Text == "INC")
		ofs << ",INC";
	else if (csf_6->Text == "NEG" || csf_6->Text == "neg" || csf_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_6->Text);
	if (csf_7->Text == gcnew String(str.c_str()) || csf_7->Text == "INC")
		ofs << ",INC";
	else if (csf_7->Text == "NEG" || csf_7->Text == "neg" || csf_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(csf_7->Text);
	ofs << endl;

	// Write d3 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d3_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d3_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_1->Text);
	if (d3_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_2->Text);
	if (d3_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_3->Text);
	if (d3_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_4->Text);
	if (d3_5->Text == gcnew String(str.c_str()) || d3_5->Text == "INC")
		ofs << ",INC";
	else if (d3_5->Text == "NEG" || d3_5->Text == "neg" || d3_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_5->Text);
	if (d3_6->Text == gcnew String(str.c_str()) || d3_6->Text == "INC")
		ofs << ",INC";
	else if (d3_6->Text == "NEG" || d3_6->Text == "neg" || d3_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_6->Text);
	if (d3_7->Text == gcnew String(str.c_str()) || d3_7->Text == "INC")
		ofs << ",INC";
	else if (d3_7->Text == "NEG" || d3_7->Text == "neg" || d3_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d3_7->Text);
	ofs << endl;
	
	// Write th01 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(th01_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (th01_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_1->Text);
	if (th01_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_2->Text);
	if (th01_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_3->Text);
	if (th01_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_4->Text);
	if (th01_5->Text == gcnew String(str.c_str()) || th01_5->Text == "INC")
		ofs << ",INC";
	else if (th01_5->Text == "NEG" || th01_5->Text == "neg" || th01_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_5->Text);
	if (th01_6->Text == gcnew String(str.c_str()) || th01_6->Text == "INC")
		ofs << ",INC";
	else if (th01_6->Text == "NEG" || th01_6->Text == "neg" || th01_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_6->Text);
	if (th01_7->Text == gcnew String(str.c_str()) || th01_7->Text == "INC")
		ofs << ",INC";
	else if (th01_7->Text == "NEG" || th01_7->Text == "neg" || th01_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(th01_7->Text);
	ofs << endl;

	// Write d13 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d13_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d13_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_1->Text);
	if (d13_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_2->Text);
	if (d13_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_3->Text);
	if (d13_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_4->Text);
	if (d13_5->Text == gcnew String(str.c_str()) || d13_5->Text == "INC")
		ofs << ",INC";
	else if (d13_5->Text == "NEG" || d13_5->Text == "neg" || d13_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_5->Text);
	if (d13_6->Text == gcnew String(str.c_str()) || d13_6->Text == "INC")
		ofs << ",INC";
	else if (d13_6->Text == "NEG" || d13_6->Text == "neg" || d13_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_6->Text);
	if (d13_7->Text == gcnew String(str.c_str()) || d13_7->Text == "INC")
		ofs << ",INC";
	else if (d13_7->Text == "NEG" || d13_7->Text == "neg" || d13_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d13_7->Text);
	ofs << endl;

	// Write d16 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d16_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d16_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_1->Text);
	if (d16_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_2->Text);
	if (d16_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_3->Text);
	if (d16_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_4->Text);
	if (d16_5->Text == gcnew String(str.c_str()) || d16_5->Text == "INC")
		ofs << ",INC";
	else if (d16_5->Text == "NEG" || d16_5->Text == "neg" || d16_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_5->Text);
	if (d16_6->Text == gcnew String(str.c_str()) || d16_6->Text == "INC")
		ofs << ",INC";
	else if (d16_6->Text == "NEG" || d16_6->Text == "neg" || d16_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_6->Text);
	if (d16_7->Text == gcnew String(str.c_str()) || d16_7->Text == "INC")
		ofs << ",INC";
	else if (d16_7->Text == "NEG" || d16_7->Text == "neg" || d16_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d16_7->Text);
	ofs << endl;

	// Write d2 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d2_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d2_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_1->Text);
	if (d2_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_2->Text);
	if (d2_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_3->Text);
	if (d2_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_4->Text);
	if (d2_5->Text == gcnew String(str.c_str()) || d2_5->Text == "INC")
		ofs << ",INC";
	else if (d2_5->Text == "NEG" || d2_5->Text == "neg" || d2_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_5->Text);
	if (d2_6->Text == gcnew String(str.c_str()) || d2_6->Text == "INC")
		ofs << ",INC";
	else if (d2_6->Text == "NEG" || d2_6->Text == "neg" || d2_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_6->Text);
	if (d2_7->Text == gcnew String(str.c_str()) || d2_7->Text == "INC")
		ofs << ",INC";
	else if (d2_7->Text == "NEG" || d2_7->Text == "neg" || d2_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d2_7->Text);
	ofs << endl;

	// Write d19 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d19_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d19_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_1->Text);
	if (d19_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_2->Text);
	if (d19_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_3->Text);
	if (d19_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_4->Text);
	if (d19_5->Text == gcnew String(str.c_str()) || d19_5->Text == "INC")
		ofs << ",INC";
	else if (d19_5->Text == "NEG" || d19_5->Text == "neg" || d19_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_5->Text);
	if (d19_6->Text == gcnew String(str.c_str()) || d19_6->Text == "INC")
		ofs << ",INC";
	else if (d19_6->Text == "NEG" || d19_6->Text == "neg" || d19_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_6->Text);
	if (d19_7->Text == gcnew String(str.c_str()) || d19_7->Text == "INC")
		ofs << ",INC";
	else if (d19_7->Text == "NEG" || d19_7->Text == "neg" || d19_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d19_7->Text);
	ofs << endl;

	// Write vwa Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(vwa_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (vwa_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_1->Text);
	if (vwa_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_2->Text);
	if (vwa_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_3->Text);
	if (vwa_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_4->Text);
	if (vwa_5->Text == gcnew String(str.c_str()) || vwa_5->Text == "INC")
		ofs << ",INC";
	else if (vwa_5->Text == "NEG" || vwa_5->Text == "neg" || vwa_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_5->Text);
	if (vwa_6->Text == gcnew String(str.c_str()) || vwa_6->Text == "INC")
		ofs << ",INC";
	else if (vwa_6->Text == "NEG" || vwa_6->Text == "neg" || vwa_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_6->Text);
	if (vwa_7->Text == gcnew String(str.c_str()) || vwa_7->Text == "INC")
		ofs << ",INC";
	else if (vwa_7->Text == "NEG" || vwa_7->Text == "neg" || vwa_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(vwa_7->Text);
	ofs << endl;

	// Write tpox Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(tpox_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (tpox_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_1->Text);
	if (tpox_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_2->Text);
	if (tpox_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_3->Text);
	if (tpox_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_4->Text);
	if (tpox_5->Text == gcnew String(str.c_str()) || tpox_5->Text == "INC")
		ofs << ",INC";
	else if (tpox_5->Text == "NEG" || tpox_5->Text == "neg" || tpox_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_5->Text);
	if (tpox_6->Text == gcnew String(str.c_str()) || tpox_6->Text == "INC")
		ofs << ",INC";
	else if (tpox_6->Text == "NEG" || tpox_6->Text == "neg" || tpox_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_6->Text);
	if (tpox_7->Text == gcnew String(str.c_str()) || tpox_7->Text == "INC")
		ofs << ",INC";
	else if (tpox_7->Text == "NEG" || tpox_7->Text == "neg" || tpox_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(tpox_7->Text);
	ofs << endl;

	// Write d18 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d18_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d18_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_1->Text);
	if (d18_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_2->Text);
	if (d18_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_3->Text);
	if (d18_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_4->Text);
	if (d18_5->Text == gcnew String(str.c_str()) || d18_5->Text == "INC")
		ofs << ",INC";
	else if (d18_5->Text == "NEG" || d18_5->Text == "neg" || d18_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_5->Text);
	if (d18_6->Text == gcnew String(str.c_str()) || d18_6->Text == "INC")
		ofs << ",INC";
	else if (d18_6->Text == "NEG" || d18_6->Text == "neg" || d18_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_6->Text);
	if (d18_7->Text == gcnew String(str.c_str()) || d18_7->Text == "INC")
		ofs << ",INC";
	else if (d18_7->Text == "NEG" || d18_7->Text == "neg" || d18_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d18_7->Text);
	ofs << endl;

	// Write d5 Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(d5_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (d5_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_1->Text);
	if (d5_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_2->Text);
	if (d5_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_3->Text);
	if (d5_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_4->Text);
	if (d5_5->Text == gcnew String(str.c_str()) || d5_5->Text == "INC")
		ofs << ",INC";
	else if (d5_5->Text == "NEG" || d5_5->Text == "neg" || d5_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_5->Text);
	if (d5_6->Text == gcnew String(str.c_str()) || d5_6->Text == "INC")
		ofs << ",INC";
	else if (d5_6->Text == "NEG" || d5_6->Text == "neg" || d5_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_6->Text);
	if (d5_7->Text == gcnew String(str.c_str()) || d5_7->Text == "INC")
		ofs << ",INC";
	else if (d5_7->Text == "NEG" || d5_7->Text == "neg" || d5_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(d5_7->Text);
	ofs << endl;

	// Write fga Information
	ofs << msclr::interop::marshal_as<std::string>(case_name->Text) << ","
		<< msclr::interop::marshal_as<std::string>(fga_label->Text) << ","
		<< msclr::interop::marshal_as<std::string>(contributors->Text);
	if (deducible->Checked == true)
		ofs << ",yes";
	else
		ofs << ",no";
	ofs << "," << msclr::interop::marshal_as<std::string>(quant->Text);
	if (fga_1->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_1->Text);
	if (fga_2->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_2->Text);
	if (fga_3->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_3->Text);
	if (fga_4->Text != gcnew String(str.c_str()))
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_4->Text);
	if (known1_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_1->Text);
	if (known2_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_2->Text);
	if (known3_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_3->Text);
	if (known4_pd->Checked == true)
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_4->Text);
	if (fga_5->Text == gcnew String(str.c_str()) || fga_5->Text == "INC")
		ofs << ",INC";
	else if (fga_5->Text == "NEG" || fga_5->Text == "neg" || fga_5->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_5->Text);
	if (fga_6->Text == gcnew String(str.c_str()) || fga_6->Text == "INC")
		ofs << ",INC";
	else if (fga_6->Text == "NEG" || fga_6->Text == "neg" || fga_6->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_6->Text);
	if (fga_7->Text == gcnew String(str.c_str()) || fga_7->Text == "INC")
		ofs << ",INC";
	else if (fga_7->Text == "NEG" || fga_7->Text == "neg" || fga_7->Text == "-1")
		ofs << ",NEG";
	else
		ofs << "," << msclr::interop::marshal_as<std::string>(fga_7->Text);
	ofs << endl;

	ofs.close();

	const char* months[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	SYSTEMTIME st;
	GetSystemTime(&st);

	ostringstream ss;
	ss << st.wHour << "-" << st.wMinute << "-" << st.wSecond << "-" << st.wMilliseconds <<
		"-" << months[st.wMonth - 1] <<
		"-" << st.wDay << "-" << st.wYear % 1000;
	string date_time = ss.str();
	_mkdir(date_time.c_str());

	String^ date_time_String = gcnew String(date_time.c_str());
	directory->Text = date_time_String;
	File_Generator::main(date_time);
	string s_allele_freq = "copy Allele_Frequencies.csv " + date_time;
	system(s_allele_freq.c_str());
	string s_drop_out_rates = "copy Drop_Out_Rates.csv " + date_time;
	system(s_drop_out_rates.c_str());
	string s_LAST = "copy LASTv4.exe " + date_time;
	system(s_LAST.c_str());
	string s_LAST_Express = "copy LASTv4_Express.exe " + date_time;
	system(s_LAST_Express.c_str());

	generate_files_button->Text = "Files Generated";
	generate_files_button->Enabled = false;
	run_LAST_button->Enabled = true;
	run_LAST_Express_button->Enabled = true;
}

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LAST_Interfacev2::MyForm form;
	Application::Run(%form);
}
