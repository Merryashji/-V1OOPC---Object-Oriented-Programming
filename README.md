# CPSE2 Herkansing 2023/24 - H5. Tic-tac-toe - Merry Ashji 

##

Dit project implementeert een Tic-Tac-Toe (3-op-een-rij) spel. De implementatie maakt gebruik van het Command pattern om het verloop van het spel te beheren en het Model-View-Controller (MVC) pattern om verschillende onderdelen te scheiden. Het spel ondersteunt zowel een grafische interface (SFML) als een text-only interface.

## Applicatie bouwen en uitvoeren
### 1. Grafische interface (SFML)
1->  make -f MakefileSfml
2->  ./main.exe
### 2. Text-only interface (commandline)
Deze versie is onavhankelijk van sfml library en om het te bouwen en uitvoeren word de volgende command gebruikt:
1->  make -f MakefileText
2->  ./tictactoe_text
### note:
Het is belanglijk om de project te shonen met clean command nodat het bowen van een interface. 
Sfml -> make -f MakefileSfml clean
Text -> make -f MakefileText clean

## 2. Spelinstructies
### Spelen met SFML
- Klik op een vakje om het te vullen met 'X' of 'O'.
- Win het spel door drie 'X' of drie 'O' op een rij te plaatsen (horizontaal, verticaal of diagonaal).
- Als het bord vol is en niemand heeft gewonnen, dan is het spel gelijkspel (draw).
- Gebruik de groene knop met het label "Undo" om de laatste zet ongedaan te maken.

### Spelen met de Commandline
- Voer de rij en kolom in gescheiden door een spatie om een zet te doen (bijvoorbeeld 1 1 of 0 2).
- Het bord wordt weergegeven met de door jou ingevoerde zet.
- Voer 'u' in om de laatste zet ongedaan te maken.
- Als je een getal buiten de bordgrootte invoert, krijg je een melding dat de invoer incorrect is.

## 3. Voorbeeldinvoer en -uitvoer
### SFML-interface
- Kies 1 om de SFML-interface te gebruiken.
- Klik op de vakjes om zetten te doen.
- Klik op de groene knop "Undo" om de laatste zet ongedaan te maken.
- Klik op de rode knop "Reset" om het spel opnieuw te starten.

### Commandline-interface
- Kies 2 om de commandline-interface te gebruiken.
- De coördinaten gaan van **0 tot 2**, waarbij de eerste coördinaat de rij en de tweede coördinaat de kolom is.
- Voer een rij en kolom in om een zet te doen (bijvoorbeeld 1 1):
    ```
    . . .
    . X .
    . . .
    ```
Player O's turn. Enter row and column (or 'u' to undo): 
- Voer 'u' in om de laatste zet ongedaan te maken:
    ```
    . . .
    . . .
    . . .
    ```
Player X's turn. Enter row and column (or 'u' to undo):
- Voer een rij en kolom in buiten de bordgrootte (bijvoorbeeld 3 3):
Invalid move. Try again.
