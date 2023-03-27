#include <iostream>
using namespace std;

class Matrix
{
    int mat1[2][2], mat2[2][2];

public:
    void setMatrix(int mat1[][2], int mat2[][2])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                this->mat1[i][j] = mat1[i][j];
                this->mat2[i][j] = mat2[i][j];
            }
        }

        // cout<<"\n======== Matrix 1 ========\n";
        // for (int i = 0; i < 2; i++)
        // {
        //     for (int j = 0; j < 2; j++)
        //     {
        //         cout << mat1[i][j];
        //         cout <<"\t";
        //     }
        //     cout << "\n";
        // }

        // cout<<"\n======== Matrix 2 ========\n";
        // for (int i = 0; i < 2; i++)
        // {
        //     for (int j = 0; j < 2; j++)
        //     {
        //         cout << mat2[i][j];
        //         cout <<"\t";
        //     }
        //     cout << "\n";
        // }
    }

    void addition()
    {
        int add[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                add[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        // getting addition
        cout << "\n========== Addition of matrices ==========\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << add[i][j];
                cout << "\t";
            }
            cout << "\n";
        }
    }

    void subtraction()
    {
        int sub[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                sub[i][j] = mat1[i][j] - mat2[i][j];
            }
        }

        // getting subtraction
        cout << "\n========== subtraction of matrices ==========\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << sub[i][j];
                cout << "\t";
            }
            cout << "\n";
        }
    }

    void multiplication()
    {
        int mul[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                mul[i][j] = mat1[i][j] * mat2[i][j];
            }
        }

        // getting multiplication
        cout << "\n========== multiplication of matrices ==========\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mul[i][j];
                cout << "\t";
            }
            cout << "\n";
        }
    }
};

int main()
{
    int mat1[2][2], mat2[2][2];

    cout << "\n======== Matrix 1 ========";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "\nEnter position [" << i << " ," << j << "] value: ";
            cin >> mat1[i][j];
        }
    }

    cout << "\n======== Matrix 2 ========";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "\nEnter position [" << i << " ," << j << "] value: ";
            cin >> mat2[i][j];
        }
    }

    // Setting class
    Matrix m;
    m.setMatrix(mat1, mat2);

    // Class output
    char choice;
    cout << "\nEnter if you want do addition(A), subtraction(S) or Multiplication(M) on matrices: ";
    cin >> choice;

    choice = (char)toupper(choice);
    switch (choice)
    {
    case 'A':
        m.addition();
        break;
    case 'S':
        m.subtraction();
        break;
    case 'M':
        m.multiplication();
        break;
    default:
        cout << "\nYou entered an invalid value!";
        break;
    }
    return 0;
}