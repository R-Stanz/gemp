class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
	    for (int linha = 0; linha < grid.size(); linha++) {
		    for (int col = 0; col < grid.at(0).size(); col++) {
			    if (grid.at(linha).at(col) == 1) {
				    return calcule_perimetro(grid, linha, col, true, 0, 0);
			    }
		    }
	    }
	    return 0;
    }

    int calcule_perimetro(vector<vector<int>>& grid, int linha, int col, bool eh_primeiro, int linha_anterior, int col_anterior) {
	    int perimetro = 0;

	    if ((linha - 1 < 0) or grid.at(linha - 1).at(col) == 0) {
		    perimetro += 1;
	    }

	    if ((col + 1 >= grid.at(0).size()) or grid.at(linha).at(col + 1) == 0) {
		    perimetro += 1;
	    }

	    if ((col - 1 < 0) or grid.at(linha).at(col - 1) == 0) {
		    perimetro += 1;
	    }

	    if ((linha + 1 >= grid.size()) or grid.at(linha + 1).at(col) == 0){
		    perimetro += 1;
	    }

	    grid.at(linha).at(col) = 2;

	    
	    if ((linha - 1 >= 0) and (grid.at(linha - 1).at(col) == 1)) {
		    if (eh_primeiro or ((linha - 1 != linha_anterior) or (col != col_anterior))) {
			    perimetro += calcule_perimetro(grid, linha - 1, col, false, linha, col);
		    }
	    }

	    if ((col + 1 < grid.at(0).size()) and (grid.at(linha).at(col + 1) == 1)) {
		    if (eh_primeiro or ((linha != linha_anterior) or (col + 1 != col_anterior))) {
			    perimetro += calcule_perimetro(grid, linha, col + 1, false, linha, col);
		    }
	    }

	    if ((col - 1 >= 0) and (grid.at(linha).at(col - 1) == 1)) {
		    if (eh_primeiro or ((linha != linha_anterior) or (col - 1 != col_anterior))) {
			    perimetro += calcule_perimetro(grid, linha, col - 1, false, linha, col);
		    }
	    }

	    if ((linha + 1 < grid.size()) and (grid.at(linha + 1).at(col) == 1)) {
		    if (eh_primeiro or ((linha + 1 != linha_anterior) or (col != col_anterior))) {
			    perimetro += calcule_perimetro(grid, linha + 1, col, false, linha, col);
		    }
	    }

	    return perimetro;
    }
};
