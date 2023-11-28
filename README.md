# activation_records

De demo kan als volgt worden uitgevoerd in vscode:
1) Selecteer een breakpoint
2) Gan naar run->debug
3) Rechterklik op code en selecteer "open disassembly view"
4) Er kan in zowel code als instructies worden gestapt.

De stack kan worden bekeken met gdb commands in de debug console. In vscode worden deze met -exec gespecificeerd. Het gdb commando om geheugen te bekijken ziet er als volgt uit: "x/(grootte)(formaat) (address)" vb. x/-64x 0x7fffffffd2d0. Je neemt best de waarde van de frame pointer als address.

Zorg ervoor dat optimisaties uitstaan in .vscode/tasks.json tenzij anders vermeld in de file.

De demos bevinden zich in stack_demos. 

- functions_calls.c: simpele functie oproepen
- functions_calls_parameters.c: zelfde met parameters
- functions_calls_return.c: zelfde met return waardes
- buffer_overflow.c: demonstratie van het basis principe
- buffer_overflow_function.c: springen naar een functie die nergens wordt gecallt. Het kan zijn dat het address van de functie anders is per platform. In dit geval kan je "string" andere characters geven die overeenkomen met het address van de functie. Om dit address te vinden ga je naar de instructies en zoek je waar deze functie begint. Het is niet echt duidelijk welke deze is maar elke functie begint normaal met de instructie endbr64.
- no_tail_call_optimisation.c: normale recursieve functie
- tail_call_optimisation.c: geoptimiseerde versie