# activation_records

De demo kan als volgt worden uitgevoerd in vscode:
1) Selecteer een breakpoint
2) Gan naar run->debug
3) Rechterklik op code en selecteer "open disassembly view"
4) Er kan in zowel code als instructies worden gestapt.

De stack kan worden bekeken met gdb commands in de debug console. In vscode worden deze met -exec gespecificeerd. Het gdb commando om geheugen te bekijken ziet er als volgt uit: "x/(grootte)(formaat) (address)" vb. x/-64x 0x7fffffffd2d0. Je neemt best de waarde van de frame pointer als address.