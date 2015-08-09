//	
//	This tool is meant to be used to generate evidence files for LAST
//	Legal Aid Statistical Tool (C) 2015 Munieshwar Ramdass
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

//
//	LAST Evidence File Generator
//	Munieshwar Ramdass	(C++ Programmer)
//	July 31, 2015
//

//#pragma once

#ifndef FILE_GENERATOR_H
#define FILE_GENERATOR_H

#include <string>
#include <vector>

namespace File_Generator {
	//string DATE_TIME_DIR;

	typedef std::string csv_string;								// The following typedef used for CSV as a means of convinience
	typedef std::vector<csv_string> csv_row;
	typedef std::vector<csv_row> csv_database;

	using namespace std;

	// Parameters: csv_database& db, string db_name
	// Returns double (0.0 or 1.0)
	double read_csv(csv_database& db, string db_name);

	// Parameters: const string& name
	// Returns nothing
	void create_files(const string& name);

	void exe(const string& name);

	int main(const string& dir);
}

#endif // !FILE_GENERATOR_h
