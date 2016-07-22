%!PS-Adobe-3.0
%%Title: *info*
%%Creator: ps-print v7.3.5
%%For: Steven Lau
%%CreationDate: 14:17:29 Jul 22 2016
%%Orientation: Portrait
%%DocumentNeededResources: font Times-Roman Times-Italic
%%+ font Courier
%%+ font Courier-Bold
%%+ font Courier-Oblique
%%+ font Courier-BoldOblique
%%+ font Helvetica
%%+ font Helvetica-Bold
%%DocumentSuppliedResources: procset PSPrintUserDefinedPrologue-s 0 0
%%DocumentMedia: Letter 612 792 0 () ()
%%PageOrder: Ascend
%%Pages: (atend)
%%Requirements:
%%EndComments
%%BeginDefaults
%%PageMedia: Letter
%%EndDefaults

%%BeginProlog

/languagelevel where{pop}{/languagelevel 1 def}ifelse
/ErrorMessage  1 def

% === BEGIN ps-print prologue 0
% version: 6.0

% Copyright (C) 2000-2015 Free Software Foundation, Inc.

% This file is part of GNU Emacs.

% GNU Emacs is free software: you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% (at your option) any later version.

% GNU Emacs is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.

% You should have received a copy of the GNU General Public License
% along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.

% As a special exception, the copyright holders of this module give
% you permission to include the module in a Postscript file generated
% by Emacs or other free software together with the result of
% converting text to be printed, regardless of the license terms of
% that text, and to use under terms of your choice the page images
% resulting from formatting said combination.  If you modify this
% module, you may extend this exception to your version of the module
% but you are not obligated to do so.  If you do not wish to do so,
% delete this exception statement from your version.


%%BeginProcSet: ErrorHandler
% Downloaded Error Break-page handler
% Adapted from:
%     PostScript Language Program Design,
%     Adobe Systems Incorporated.
%     Appendix A, pages 217-219

/ps$brkpage where{pop}
{
 /ps$brkpage 64 dict def
 ps$brkpage begin
  /tx 0 def/ty 0 def/toy 0 def/tox 0 def
  /prnt{
   dup type/stringtype ne{=string cvs}if
   dup length 6 mul
   /tx exch def/ty 10 def
   currentpoint/toy exch def/tox exch def
   1 setgray newpath
   tox toy 2 sub moveto
   0 ty rlineto tx 0 rlineto
   0 ty neg rlineto
   closepath fill
   tox toy moveto 0 setgray show
  }bind def
  /nl{currentpoint exch pop lmargin exch moveto 0 -10 rmoveto}def
  /=={/cp 0 def typeprint nl}def
  /typeprint{dup type dup currentdict exch known{exec}{unknowntype}ifelse}readonly def
  /lmargin 72 def
  /rmargin 72 def
  /tprint{
   dup length cp add rmargin gt{nl/cp 0 def}if
   dup length cp add/cp exch def
   prnt
  }readonly def
  /cvsprint{=string cvs tprint( )tprint}readonly def
  /unknowntype{exch pop cvlit(??)tprint cvsprint}readonly def
  /integertype{cvsprint}readonly def
  /realtype{cvsprint}readonly def
  /booleantype{cvsprint}readonly def
  /operatortype{(//)tprint cvsprint}readonly def
  /marktype{pop(-mark-)tprint}readonly def
  /dicttype{pop(-dictionary-)tprint}readonly def
  /nulltype{pop(-null-)tprint}readonly def
  /filetype{pop(-filestream-)tprint}readonly def
  /savetype{pop(-savelevel-)tprint}readonly def
  /fonttype{pop(-fontid-)tprint}readonly def
  /nametype{dup xcheck not{(/)tprint}if cvsprint}readonly def
  /stringtype{
   dup rcheck
   {(\()tprint tprint(\))tprint}
   {pop(-string-)tprint}ifelse}readonly def
  /arraytype{
   dup rcheck
   {dup xcheck
    {({)tprint{typeprint}forall(})tprint}
    {([)tprint{typeprint}forall(])tprint}ifelse}
   {pop(-array-)tprint}ifelse}readonly def
  /packedarraytype{
   dup rcheck
   {dup xcheck
    {({)tprint{typeprint}forall(})tprint}
    {([)tprint{typeprint}forall(])tprint}ifelse}
   {pop(-packedarray-)tprint}ifelse}readonly def
  /courier/Courier findfont 10 scalefont def
  /OLDhandleerror errordict/handleerror get def
 end %ps$brkpage

 /handleerror{
  systemdict begin $error begin ps$brkpage begin
  newerror
  {/newerror false store vmstatus pop pop 0 ne{grestoreall}if
   initgraphics
   ErrorMessage 1 and 0 ne{ % print on paper
    courier setfont lmargin 720 moveto
    (# ERROR: )prnt errorname prnt nl
    (# OFFENDING COMMAND: )prnt/command load prnt
    $error/ostack known
    {nl nl(# STACK:)prnt nl nl $error/ostack get aload length{==}repeat}if
    $error/errorinfo known
    {nl nl(# ERRORINFO:)prnt nl nl $error/errorinfo get aload length{==}repeat}if
    systemdict/showpage get exec}if
   ErrorMessage 2 and 0 ne{ % send back to printing system
    (\%\%[ Error: )print errorname =print
    (; OffendingCommand: )print/command load =print
    $error/errorinfo known
    {(; ErrorInfo:)print $error/errorinfo get aload length{( )=print =print}repeat}if
    ( ]\%\%)= flush
    (\%\%[ Rest of job is ignored ]\%\%)= flush}if
   /newerror true store}if
  end end end
  stop
 } % handleerror
 dup 0 systemdict put % replace name by actual dict object
 dup 4 ps$brkpage put % replace name by dict object
 bind readonly

 errordict 3 1 roll put % put proc in errordict as /handleerror
}ifelse
%%EndProcSet


% operators for language level 2 only

(<<)cvn where			% << operator
{pop/BMark(<<)cvn load def}
{/BMark{mark}bind def}ifelse
(>>)cvn where			% >> operator
{pop/EMark(>>)cvn load def}
{/EMark{counttomark 2 idiv dup dict begin{def}repeat pop currentdict end}bind def}ifelse
/setpagedevice where		% setpagedevice
{pop}
{/setpagedevice{pop}bind def}ifelse
/packedarray where		% packedarray
{pop}
{/packedarray{array astore readonly}bind def}ifelse


% device dependent operators

/DefOp{
 dup where{pop pop pop}
 {exch dup where{pop}{pop/pop}ifelse load def}ifelse}def

/duplexmode/setduplexmode DefOp
/tumble/settumble DefOp

% === END ps-print prologue 0

%%BeginResource: procset PSPrintUserDefinedPrologue-s 0 0


%%EndResource

/LandscapeMode       false def
/UpsideDown          false def
/NumberOfColumns     1 def
/LandscapePageHeight 792.0 def
/PrintPageWidth      498.6141732283465 def
/PrintWidth   498.6141732283465 def
/PrintHeight  643.7029732283465 def
/LeftMargin   56.69291338582677 def
/RightMargin  56.69291338582677 def
/InterColumn  56.69291338582677 def
/BottomMargin 42.51968503937008 def
/TopMargin    42.51968503937008 def
/HeaderOffset 28.346456692913385 def
/HeaderPad    2.4276 def
/FooterOffset 28.346456692913385 def
/FooterPad    0 def
/FooterLines  2 def
/ShowNofN           true def
/SwitchHeader       false def
/PrintOnlyOneHeader false def
/PrintHeader        true def
/PrintHeaderFrame   true def
/HeaderFrameProperties [0.000 0.900 0.400 0.000 0.000 ]def
/PrintFooter        false def
/PrintFooterFrame   true def
/FooterFrameProperties [0.000 0.900 0.400 0.000 0.000 ]def
/LineSpacing      0 def
/ParagraphSpacing 0 def
/LineHeight       8.967500000000001 def
/LinesPerColumn   72 def
/WarnPaperSize    true def
/Zebra            false def
/PrintLineNumber  false def
/SyncLineZebra    false def
/ZebraFollow      0 def
/PrintLineStep    1 def
/PrintLineStart   1 def
/LineNumberColor  [0.000 0.000 0.000] def
/ZebraHeight      3 def
/ZebraColor       0.950 def
/BackgroundColor  [1.000 1.000 1.000] def
/UseSetpagedevice false def

/PageWidth PrintPageWidth LeftMargin add RightMargin add def

/N-Up           1 def
/N-Up-Landscape false def
/N-Up-Border    true def
/N-Up-Lines     1 def
/N-Up-Columns   1 def
/N-Up-Missing   0 def
/N-Up-Margin    28.346456692913385 def
/N-Up-Repeat    N-Up-Lines def
/N-Up-End       N-Up-Columns def
/N-Up-XColumn   PageWidth def
/N-Up-YColumn   0 def
/N-Up-XLine     N-Up-End 1 sub PageWidth mul neg def
/N-Up-YLine     LandscapePageHeight neg def
/N-Up-XStart    0 def
/N-Up-YStart    0 def

% === BEGIN ps-print prologue 1
% version: 6.1

% Copyright (C) 2000-2015 Free Software Foundation, Inc.

% This file is part of GNU Emacs.

% GNU Emacs is free software: you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% (at your option) any later version.

% GNU Emacs is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.

% You should have received a copy of the GNU General Public License
% along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.

% As a special exception, the copyright holders of this module give
% you permission to include the module in a Postscript file generated
% by Emacs or other free software together with the result of
% converting text to be printed, regardless of the license terms of
% that text, and to use under terms of your choice the page images
% resulting from formatting said combination.  If you modify this
% module, you may extend this exception to your version of the module
% but you are not obligated to do so.  If you do not wish to do so,
% delete this exception statement from your version.


% ISOLatin1Encoding stolen from ps_init.ps in GhostScript 2.6.1.4:
/ISOLatin1Encoding where{pop}{
% -- The ISO Latin-1 encoding vector isn't known, so define it.
% -- The first half is the same as the standard encoding,
% -- except for minus instead of hyphen at code 055.
/ISOLatin1Encoding
StandardEncoding 0 45 getinterval aload pop
    /minus
StandardEncoding 46 82 getinterval aload pop
%*** NOTE: the following are missing in the Adobe documentation,
%*** but appear in the displayed table:
%*** macron at 0225, dieresis at 0230, cedilla at 0233, space at 0240.
% 0200 (128)
    /.notdef/.notdef/.notdef/.notdef/.notdef/.notdef/.notdef/.notdef
    /.notdef/.notdef/.notdef/.notdef/.notdef/.notdef/.notdef/.notdef
    /dotlessi/grave/acute/circumflex/tilde/macron/breve/dotaccent
    /dieresis/.notdef/ring/cedilla/.notdef/hungarumlaut/ogonek/caron
% 0240 (160)
    /space/exclamdown/cent/sterling
	/currency/yen/brokenbar/section
    /dieresis/copyright/ordfeminine/guillemotleft
	/logicalnot/hyphen/registered/macron
    /degree/plusminus/twosuperior/threesuperior
	/acute/mu/paragraph/periodcentered
    /cedilla/onesuperior/ordmasculine/guillemotright
	/onequarter/onehalf/threequarters/questiondown
% 0300 (192)
    /Agrave/Aacute/Acircumflex/Atilde
	/Adieresis/Aring/AE/Ccedilla
    /Egrave/Eacute/Ecircumflex/Edieresis
	/Igrave/Iacute/Icircumflex/Idieresis
    /Eth/Ntilde/Ograve/Oacute
	/Ocircumflex/Otilde/Odieresis/multiply
    /Oslash/Ugrave/Uacute/Ucircumflex
	/Udieresis/Yacute/Thorn/germandbls
% 0340 (224)
    /agrave/aacute/acircumflex/atilde
	/adieresis/aring/ae/ccedilla
    /egrave/eacute/ecircumflex/edieresis
	/igrave/iacute/icircumflex/idieresis
    /eth/ntilde/ograve/oacute
	/ocircumflex/otilde/odieresis/divide
    /oslash/ugrave/uacute/ucircumflex
	/udieresis/yacute/thorn/ydieresis
256 packedarray def
}ifelse

/reencodeFontISO{ %def
  dup
  length 12 add dict	% Make a new font (a new dict the same size
			% as the old one) with room for our new symbols.

  begin			% Make the new font the current dictionary.

    % Copy each of the symbols from the old dictionary
    % to the new one except for the font ID.
    {1 index/FID ne{def}{pop pop}ifelse}forall

    % Override the encoding with the ISOLatin1 encoding.
    currentdict/FontType get 0 ne{/Encoding ISOLatin1Encoding def}if

    % Use the font's bounding box to determine the ascent, descent,
    % and overall height; don't forget that these values have to be
    % transformed using the font's matrix.

%          ^    (x2 y2)
%          |       |
%          |       v
%          |  +----+ - -
%          |  |    |   ^
%          |  |    |   | Ascent (usually > 0)
%          |  |    |   |
% (0 0) -> +--+----+-------->
%             |    |   |
%             |    |   v Descent (usually < 0)
% (x1 y1) --> +----+ - -

    currentdict/FontType get 0 ne
    {/FontBBox load aload pop			% -- x1 y1 x2 y2
     FontMatrix transform/Ascent  exch def pop
     FontMatrix transform/Descent exch def pop}
    {/PrimaryFont FDepVector 0 get def
     PrimaryFont/FontBBox get aload pop
     PrimaryFont/FontMatrix get transform/Ascent exch def pop
     PrimaryFont/FontMatrix get transform/Descent exch def pop}ifelse

    /FontHeight Ascent Descent sub def	% use `sub' because descent < 0

    % Define these in case they're not in the FontInfo
    % (also, here they're easier to get to).
    /UnderlinePosition  Descent 0.70 mul def
    /OverlinePosition   Descent UnderlinePosition sub Ascent add def
    /StrikeoutPosition  Ascent 0.30 mul def
    /LineThickness      FontHeight 0.05 mul def
    /Xshadow            FontHeight  0.08 mul def
    /Yshadow            FontHeight -0.09 mul def
    /SpaceBackground    Descent neg UnderlinePosition add def
    /XBox               Descent neg def
    /YBox               LineThickness 0.7 mul def

    currentdict		% Leave the new font on the stack
    end			% Stop using the font as the current dictionary.
    definefont		% Put the font into the font dictionary
    pop			% Discard the returned font.
}bind def

% Font definition
/DefFont{findfont exch scalefont reencodeFontISO}def

% Font selection
/F{
  findfont
  dup/Ascent            get/Ascent            exch def
  dup/Descent           get/Descent           exch def
  dup/FontHeight        get/FontHeight        exch def
  dup/UnderlinePosition get/UnderlinePosition exch def
  dup/OverlinePosition  get/OverlinePosition  exch def
  dup/StrikeoutPosition get/StrikeoutPosition exch def
  dup/LineThickness     get/LineThickness     exch def
  dup/Xshadow           get/Xshadow           exch def
  dup/Yshadow           get/Yshadow           exch def
  dup/SpaceBackground   get/SpaceBackground   exch def
  dup/XBox              get/XBox              exch def
  dup/YBox              get/YBox              exch def
  setfont
}def

/FG/setrgbcolor load def

/bg false def
/BG{
  dup/bg exch def
  {[4 1 roll]}
  {[1.0 1.0 1.0]}
  ifelse
  /bgcolor exch def
}def

%  B    width    C
%   +-----------+
%               | Ascent  (usually > 0)
% A +           +
%               | Descent (usually < 0)
%   +-----------+
%  E    width    D

/dobackground{				% width --
  currentpoint				% -- width x y
  gsave
    newpath
    moveto				% A (x y)
    0 Ascent rmoveto			% B
    dup 0 rlineto			% C
    0 Descent Ascent sub rlineto	% D
    neg 0 rlineto			% E
    closepath
    FillBgColor
  grestore
}def

/eolbg{					% dobackground until right margin
  PrintWidth				% -- x-eol
  currentpoint pop			% -- cur-x
  sub					% -- width until eol
  dobackground
}def

/LineHS LineHeight LineSpacing add def
/ParagraphHS LineHeight ParagraphSpacing add def
/PSL{/h exch def bg{eolbg}if  0  currentpoint exch pop h sub  moveto}def
/PLN{PrintLineNumber{doLineNumber}if}def

/SL{LineHS PSL isLineStep pop}def	% Soft Linefeed

/PHL{ParagraphHS PSL PLN}def		% Paragraph Hard Linefeed
/LHL{LineHS PSL PLN}def			% Hard Linefeed

% Some debug
/dcp{currentpoint exch 40 string cvs print(, )print =}def
/dp{print 2 copy  exch 40 string cvs print(, )print =}def

/W{
  ( )stringwidth	% Get the width of a space in the current font.
  pop			% Discard the Y component.
  mul			% Multiply the width of a space
			% by the number of spaces to plot
  bg{dup dobackground}if
  0 rmoveto
}def

/Effect          0 def
/EffectUnderline false def
/EffectStrikeout false def
/EffectOverline  false def
/EffectShadow    false def
/EffectBox       false def
/EffectOutline   false def

% effect: 1  - underline  2   - strikeout  4  - overline
%         8  - shadow     16  - box        32 - outline
/EF{
  /Effect exch def
  /EffectUnderline Effect 1  and 0 ne def
  /EffectStrikeout Effect 2  and 0 ne def
  /EffectOverline  Effect 4  and 0 ne def
  /EffectShadow    Effect 8  and 0 ne def
  /EffectBox       Effect 16 and 0 ne def
  /EffectOutline   Effect 32 and 0 ne def
}def

% stack:  string  |-  --
/S{
  /xx currentpoint dup Descent add/yy exch def
  Ascent add/YY exch def def
  dup stringwidth pop xx add/XX exch def
  EffectShadow{
    /yy yy Yshadow add def
    /XX XX Xshadow add def
  }if
  bg{
    true
    EffectBox
      {SpaceBackground doBox}
      {xx yy XX YY doRect}
    ifelse
  }if						% background
  EffectBox      {false 0 doBox}if		% box
  EffectShadow   {dup doShadow}if		% shadow
  EffectOutline
    {true doOutline}				% outline
    {show}					% normal text
  ifelse
  EffectUnderline{UnderlinePosition Hline}if	% underline
  EffectStrikeout{StrikeoutPosition Hline}if	% strikeout
  EffectOverline {OverlinePosition  Hline}if	% overline
}bind def

% stack:  position  |-  --
/Hline{
  currentpoint exch pop add dup
  gsave
  newpath
  xx exch moveto
  XX exch lineto
  closepath
  LineThickness setlinewidth stroke
  grestore
}bind def

% stack:  fill-or-not delta  |-  --
/doBox{
  /dd exch def
  xx XBox sub dd sub yy YBox sub dd sub
  XX XBox add dd add YY YBox add dd add
  doRect
}bind def

% stack:  fill-or-not lower-x lower-y upper-x upper-y  |-  --
/doRect{
  /rYY exch def
  /rXX exch def
  /ryy exch def
  /rxx exch def
  gsave
  newpath
  rXX rYY moveto
  rxx rYY lineto
  rxx ryy lineto
  rXX ryy lineto
  closepath
  % top of stack: fill-or-not
  {FillBgColor}
  {LineThickness setlinewidth stroke}ifelse
  grestore
}bind def

% stack:  string  |-  --
/doShadow{
  gsave
  Xshadow Yshadow rmoveto
  false doOutline
  grestore
}bind def

/st 1 string def

% stack:  string fill-or-not  |-  --
/doOutline{
  /-fillp- exch def
  /-ox- currentpoint/-oy- exch def def
  gsave
  LineThickness setlinewidth
  {st 0 3 -1 roll put
   st dup true charpath
   -fillp- {gsave FillBgColor grestore}if
   stroke stringwidth
   -oy- add/-oy- exch def
   -ox- add/-ox- exch def
   -ox- -oy- moveto
  }forall
  grestore
  -ox- -oy- moveto
}bind def

% stack:  --
/FillBgColor{bgcolor aload pop setrgbcolor fill}bind def

% stack:  -- |- boolean
/isLineStep{
  SyncLineZebra
  {PLScounter 0 gt						% or zebra
   {/PLScounter PLScounter 1 sub def PLScounter 0 eq}
   {false}ifelse
   PrintLineStep 1 gt
   {/PrintLineStep PrintLineStep 1 sub def}
   {/PrintLineStep ZebraHeight def
    /PLScounter PrintLineStart def}ifelse}
  {LineNumber PrintLineStart sub PrintLineStep mod 0 eq}ifelse	% or line step
}def

% stack:  --
/doLineNumber{
  /LineNumber where
  {pop
   isLineStep			% or line step
   LineNumber Lines ge or	% or last line
   {currentfont
    gsave
    LineNumberColor SetColor
    /L0 findfont setfont
    LineNumber Lines ge
    {(end      )}
    {LineNumber 6 string cvs(      )strcat}ifelse
    dup stringwidth pop neg 0 rmoveto
    show
    grestore
    setfont}if
    /LineNumber LineNumber 1 add def
  }if
}def

% stack: color-specifier |- --
/SetColor{dup type/realtype eq{setgray}{aload pop setrgbcolor}ifelse}def

% stack: --
/printZebra{
  gsave
  ZebraColor SetColor
  /double-zebra ZebraHeight ZebraHeight add def
  /yiter double-zebra LineHS mul neg def
  /xiter PrintWidth InterColumn add def
  /zebra-line LinesPrinted def
  NumberOfColumns{LinesPerColumn doColumnZebra xiter 0 rmoveto}repeat
  grestore
}def

% stack:  lines-per-column |- --
/doColumnZebra{
  /lpc exch def
  gsave
  ZebraFollow 1 and 0 ne{
    /H ZebraHeight zebra-line ZebraHeight mod sub def
    /lpc lpc H sub def
    zebra-line double-zebra mod ZebraHeight lt
    {H doZebra	% "black" stripe followed by a "white" stripe
     /lpc lpc ZebraHeight sub def
     H ZebraHeight add}
    {H}ifelse	% "white" stripe
    LineHS mul neg 0 exch rmoveto
    /zebra-line zebra-line LinesPerColumn add def
  }if
  /zspacing 0 def
  lpc dup double-zebra idiv{ZebraHeight doZebra 0 yiter rmoveto}repeat
  double-zebra mod dup 0 le{pop}
  {dup ZebraHeight gt
   {pop ZebraHeight}
   {/zspacing LineSpacing def
    ZebraFollow 2 and 0 ne{pop ZebraHeight}if}ifelse
   doZebra}ifelse
  grestore
}def

% stack:  zebra-height (in lines) |- --
/doZebra{
  /zh exch 0.05 sub LineHS mul zspacing sub def
  gsave
  0 LineHeight 0.65 mul rmoveto
  PrintWidth 0 rlineto
  0 zh neg rlineto
  PrintWidth neg 0 rlineto
  0 zh rlineto
  fill
  grestore
}def

% stack: --
/printBackground{
  /BackgroundColor where{
    /LHg LineHeight 0.65 mul def
    /PHg PrintHeight LHg add def
    pop gsave BackgroundColor SetColor
    NumberOfColumns{
     gsave
     0 LHg rmoveto
     PrintWidth 0 rlineto
     0 PHg neg rlineto
     PrintWidth neg 0 rlineto
     0 PHg rlineto
     fill
     grestore
     PrintWidth InterColumn add 0 rmoveto
    }repeat
    grestore
  }if
}def

% tx ty rotation xscale yscale xpos ypos BeginBackImage
/BeginBackImage{
  /-save-image- save def
  /showpage{}def
  translate
  scale
  rotate
  translate
}def

/EndBackImage{-save-image- restore}def

% string fontsize fontname rotation gray xpos ypos ShowBackText
/ShowBackText{
  gsave
  translate
  setgray
  rotate
  findfont exch dup/-offset- exch -0.25 mul def scalefont setfont
  0 -offset- moveto
  /-saveLineThickness- LineThickness def
  /LineThickness 1 def
  false doOutline
  /LineThickness -saveLineThickness- def
  grestore
}def

/SetPageSize{
  BMark/PageSize[PageWidth LandscapePageHeight LandscapeMode{exch}if]EMark setpagedevice
}def

/BeginDoc{
  % ---- Remember space width of the normal text font `f0'.
  /SpaceWidth/f0 findfont setfont( )stringwidth pop def
  % ---- save the state of the document (useful for ghostscript!)
  /docState save def
  % ---- [andrewi] set PageSize based on chosen dimensions
  UseSetpagedevice{
   WarnPaperSize{SetPageSize}{mark{SetPageSize}stopped cleartomark}ifelse
  }if
  /ColumnWidth PrintWidth InterColumn add def
  % ---- define where  printing will start
  /f0 F					% this installs Ascent
  /PrintStartY PrintHeight Ascent sub def
  /ColumnIndex 1 def
  /N-Up-Counter N-Up-End 1 sub def
  /PLScounter PrintLineStart def
}def

/EndDoc{
  % ---- restore the state of the document (useful for ghostscript!)
  docState restore
}def

/BeginDSCPage{
  % ---- when 1st column, save the state of the page
  ColumnIndex 1 eq{/pageState save def}if
  % ---- save the state of the column
  /columnState save def
}def

/PrintHeaderWidth PrintOnlyOneHeader{PrintPageWidth}{PrintWidth}ifelse def

/BeginPage{
  /LinesPrinted exch def
  % ---- when 1st column, print all background effects
  ColumnIndex 1 eq{
    0 PrintStartY moveto		% move to where printing will start
    printBackground
    Zebra{printZebra}if
    printGlobalBackground
    printLocalBackground
  }if
  PrintOnlyOneHeader{ColumnIndex 1 eq}{true}ifelse
  dup PrintHeader and{
    PrintHeaderFrame{HeaderFrame}if
    HeaderText
  }if
  PrintFooter and{
    PrintFooterFrame{FooterFrame}if
    FooterText
  }if
  0 PrintStartY moveto			% move to where printing will start
  /LineNumber where
  {pop
   SyncLineZebra
   {/H PageNumber 1 sub NumberOfColumns mul ColumnIndex 1 sub add
       LinesPerColumn mul ZebraHeight mod def
    /PLScounter H PrintLineStart ge{0}{PrintLineStart H sub}ifelse def
    /PrintLineStep ZebraHeight H sub def}if}if
  PLN
}def

/EndPage{bg{eolbg}if}def

/EndDSCPage{
  ColumnIndex NumberOfColumns eq{
    % ---- restore the state of the page
    pageState restore
    /ColumnIndex 1 def
    % ---- N-up printing
    N-Up 1 gt{
      N-Up-Counter 0 gt
      {% ---- Next page on same row
	/N-Up-Counter N-Up-Counter 1 sub def
	N-Up-XColumn N-Up-YColumn}
      {% ---- Next page on next line
	/N-Up-Counter N-Up-End 1 sub def
	N-Up-XLine N-Up-YLine}ifelse
      translate
    }if
  }{ % else
    % ---- restore the state of the current column
    columnState restore
    % ---- and translate to the next column
    ColumnWidth 0 translate
    /ColumnIndex ColumnIndex 1 add def
  }ifelse
}def

/TextStart{
  LeftMargin BottomMargin
  PrintFooter{
    FooterPad add
    FooterLines FooterLineHeight mul add
    FooterPad add
    FooterOffset add}if
}def

% stack: number-of-pages-per-sheet |- --
/BeginSheet{
  /sheetState save def
  /pages-per-sheet exch def

  % ---- translate to bottom-right corner of Portrait page
  LandscapeMode{
    LandscapePageHeight 0 translate
    90 rotate
  }if
  % ---- [jack] Kludge: my ghostscript window is 21x27.7 instead of 21x29.7
  /JackGhostscript where{pop 1 27.7 29.7 div scale}if
  UpsideDown{PageWidth LandscapePageHeight translate 180 rotate}if
  % ---- N-Up printing
  N-Up 1 gt{
    % ---- landscape
    N-Up-Landscape{
      PageWidth 0 translate
      90 rotate
    }if
    N-Up-Margin dup translate
    % ---- scale
    LandscapeMode{
      /HH PageWidth def
      /WW LandscapePageHeight def
    }{
      /HH LandscapePageHeight def
      /WW PageWidth def
    }ifelse
    /xx 0 def
    N-Up-Landscape{
      /ww WW WW mul N-Up-Lines HH mul div def
      /cc HH N-Up-Columns N-Up-Missing add div def
      ww cc gt{/xx WW def/WW cc ww div WW mul def/xx xx WW sub def}if
    }{
      /hh HH N-Up-Columns N-Up-Missing add div def
      /cc HH N-Up-Lines div def
      hh cc gt{/xx WW def/WW cc hh div WW mul def/xx xx WW sub def}if
    }ifelse
    WW N-Up-Margin sub N-Up-Margin sub
    N-Up-Landscape
    {N-Up-Lines div HH}
    {N-Up-Columns N-Up-Missing add div WW}ifelse
    div dup scale
    LandscapeMode{/yy 0 def}{/yy xx def/xx 0 def}ifelse
    xx N-Up-Repeat 1 sub LandscapePageHeight mul yy add translate
    % ---- go to start position in page matrix
    N-Up-XStart N-Up-Missing 0.5 mul
    LandscapeMode
    {LandscapePageHeight mul N-Up-YStart add}
    {PageWidth mul add N-Up-YStart}ifelse
    translate
  }if
  % ---- translate to lower left corner of TEXT
  TextStart translate

  % ---- N-up printing
  N-Up 1 gt N-Up-Border and pages-per-sheet 0 gt and{
    % ---- page border
    gsave
    0 setgray
    TextStart exch neg exch neg moveto
    N-Up-Repeat
    {N-Up-End
     {gsave
      PageWidth 0 rlineto
      0 LandscapePageHeight rlineto
      PageWidth neg 0 rlineto
      closepath stroke
      grestore
      /pages-per-sheet pages-per-sheet 1 sub def
      pages-per-sheet 0 le{exit}if
      N-Up-XColumn N-Up-YColumn rmoveto
     }repeat
     pages-per-sheet 0 le{exit}if
     N-Up-XLine N-Up-XColumn sub N-Up-YLine rmoveto
    }repeat
    grestore
  }if
}def

/EndSheet{
  showpage
  sheetState restore
}def

/SetHeaderLines{			% nb-lines --
  /HeaderLines exch def
  % ---- bottom up
  HeaderPad
  HeaderLines 1 sub HeaderLineHeight mul add
  HeaderTitleLineHeight add
  HeaderPad add
  /HeaderHeight exch def
}def

/SetFooterLines{			% nb-lines --
  /FooterLines exch def
  % ---- bottom up
  FooterPad
  FooterLines FooterLineHeight mul add
  FooterPad add
  /FooterHeight exch def
}def

% |---------|
% |  tm     |
% |---------|
% |  header |
% |-+-------| <-- (x y)
% |  ho     |
% |---------|
% |  text   |
% |---------|
% |  fo     |
% |---------|
% |  footer |
% |-+-------| <-- (0 0)
% |  bm     |
% |---------|

% -- |- x y
/HeaderFrameStart{0  PrintHeight HeaderOffset add}def
/FooterFrameStart{0  FooterHeight FooterOffset add neg}def

/doFramePath{
  /h exch def
  PrintHeaderWidth	0	rlineto
  0			h	rlineto
  PrintHeaderWidth neg	0	rlineto
  0			h neg	rlineto
}def

/HeaderFramePath{HeaderHeight doFramePath}def
/FooterFramePath{FooterHeight doFramePath}def

% /path-fun /start-fun vector-property doFrame
/doFrame{
  /vecFrame exch def
  /startFrame exch load def
  /pathFrame exch load def
  gsave
    vecFrame 2 get setlinewidth				% frame border width
    % ---- do the shadow of the next rectangle
    startFrame moveto
    1 -1 rmoveto
    pathFrame
    vecFrame 4 get SetColor fill			% frame shadow color
    % ---- do the next rectangle ...
    startFrame moveto
    pathFrame
    gsave vecFrame 1 get SetColor fill grestore		% frame background
    gsave vecFrame 3 get SetColor stroke grestore	% frame border color
  grestore
}def

/HeaderFrame{/HeaderFramePath /HeaderFrameStart HeaderFrameProperties doFrame}def
/FooterFrame{/FooterFramePath /FooterFrameStart FooterFrameProperties doFrame}def

/HeaderStart{
  HeaderFrameStart
  exch HeaderPad add exch	% horizontal pad
  % ---- bottom up
  HeaderPad add			% vertical   pad
  HeaderDescent sub
  HeaderLineHeight HeaderLines 1 sub mul add
}def

/FooterStart{
  FooterFrameStart
  exch FooterPad add exch	% horizontal pad
  % ---- bottom up
  FooterPad add			% vertical   pad
  FooterDescent sub
  FooterLineHeight FooterLines 1 sub mul add
}def

/HeaderClip{HeaderFrameStart moveto HeaderFramePath clip}def
/FooterClip{FooterFrameStart moveto FooterFramePath clip}def

/strcat{
  dup length 3 -1 roll dup length dup 4 -1 roll add string dup
  0 5 -1 roll putinterval
  dup 4 2 roll exch putinterval
}def

/pagenumberstring{
  PageNumber 32 string cvs
  ShowNofN{(/)strcat PageCount 32 string cvs strcat}if
}def

% lines is-right HeaderOrFooterTextLines
/HeaderOrFooterTextLines{
  /is_right exch def
  HFStart moveto
  { % ---- process the lines
   aload pop
   exch F
   gsave
    dup xcheck{exec}if
    is_right{
     dup stringwidth pop
     PrintHeaderWidth exch sub HFPad HFPad add sub 0 rmoveto
    }if
    HFColor SetColor
    show
   grestore
   0 HFLineHeight neg rmoveto
  }forall
}def

% right-lines left-lines /start lineheight pad fore-color HeaderOrFooterText
/HeaderOrFooterText{
  /HFColor exch def
  /HFPad exch def
  /HFLineHeight exch def
  /HFStart exch load def

  % -- rightLines leftLines -- at stack

  % ---- hack: `PN 1 and'  ==  `PN 2 modulo'
  % ---- if even page number and duplex, then exchange left and right
  PageNumber 1 and 0 eq SwitchHeader and{exch}if

  % ---- process the left lines
  false HeaderOrFooterTextLines

  % ---- process the right lines
  true HeaderOrFooterTextLines
}def

/HeaderText{
  gsave HeaderClip
  HeaderLinesRight HeaderLinesLeft
  /HeaderStart HeaderLineHeight HeaderPad
  HeaderFrameProperties 0 get
  HeaderOrFooterText
  grestore
}def

/FooterText{
  gsave FooterClip
  FooterLinesRight FooterLinesLeft
  /FooterStart FooterLineHeight FooterPad
  FooterFrameProperties 0 get
  HeaderOrFooterText
  grestore
}def

/ReportFontInfo{
  2 copy
  /t0 3 1 roll DefFont
  /t0 F
  /lh FontHeight def
  /sw( )stringwidth pop def
  /aw(01234567890abcdefghijklmnopqrstuvwxyz)dup length exch
  stringwidth pop exch div def
  /t1 12/Helvetica-Oblique DefFont
  /t1 F
  gsave
    (languagelevel = )show
    languagelevel 32 string cvs show
  grestore
  0 FontHeight neg rmoveto
  gsave
    (For )show
    128 string cvs show
    ( )show
    32 string cvs show
    ( point, the line height is )show
    lh 32 string cvs show
    (, the space width is )show
    sw 32 string cvs show
    (,)show
  grestore
  0 FontHeight neg rmoveto
  gsave
    (and a crude estimate of average character width is )show
    aw 32 string cvs show
    (.)show
  grestore
  0 FontHeight neg rmoveto
}def

% cm to point
/cm{72 mul 2.54 div}def

/ReportAllFontInfo{
  % key = font name   value = font dictionary
  FontDirectory{pop 10 exch ReportFontInfo}forall
}def

% 3 cm 20 cm moveto  10/Courier ReportFontInfo  showpage
% 3 cm 20 cm moveto  ReportAllFontInfo          showpage

% === END ps-print prologue 1

/printGlobalBackground{
}def
/printLocalBackground{
}def

%%EndProlog

%%BeginSetup

%%IncludeResource: font Times-Roman
%%IncludeResource: font Times-Italic
%%IncludeResource: font Courier
%%IncludeResource: font Courier-Bold
%%IncludeResource: font Courier-Oblique
%%IncludeResource: font Courier-BoldOblique
%%IncludeResource: font Helvetica
%%IncludeResource: font Helvetica-Bold
/h0 14(Helvetica-Bold)cvn DefFont
/h1 12(Helvetica)cvn DefFont
/L0 6(Times-Italic)cvn DefFont
/H0 12(Helvetica)cvn DefFont


% ---- These lines must be kept together because...

/h0 F
/HeaderTitleLineHeight FontHeight def

/h1 F
/HeaderLineHeight FontHeight def
/HeaderDescent    Descent def

/H0 F
/FooterLineHeight FontHeight def
/FooterDescent    Descent def

% ---- ...because `F' has a side-effect on `FontHeight' and `Descent'

/f0 8.5(Courier)cvn DefFont
/f1 8.5(Courier-Bold)cvn DefFont
/f2 8.5(Courier-Oblique)cvn DefFont
/f3 8.5(Courier-BoldOblique)cvn DefFont
/SpaceWidthRatio 0.600000 def

%%BeginFeature: *ManualFeed False
BMark /ManualFeed false EMark setpagedevice
%%EndFeature

%%%% Start of Mule Section

/Latin1Encoding {	% newname fontname  |  font
    findfont dup length dict begin
	{ 1 index /FID ne { def } { pop pop } ifelse } forall
        /Encoding ISOLatin1Encoding def
	currentdict
    end
    definefont
} bind def

%% Redefine fonts for multiple charsets.
/ReDefFont {		     % fontname encoding fdepvector size  |  -
  20 dict begin
  3 index findfont {
    1 index /FID ne 2 index /UniqueID ne and {def} {pop pop} ifelse
  } forall
  /FontType 0 def
  /FMapType 3 def
  /EscChar 0 def
  % FontMatrix ::= [ size 0 0 size 0 0 ]
  /FontMatrix exch [ exch dup 0 exch 0 exch 0 0 ] def
  /FDepVector exch def
  /Encoding exch def
  currentdict
  end			% fontname dic
  definefont pop
} bind def

/EscChar 0 def

%% End of Mule Section

/F00 /Courier findfont def
/ETOP0 256 array def
0 1 255 { ETOP0 exch 0 put } for
ETOP0 0 0 put
/VTOP0 [F00] def
/ETOP1 256 array def
0 1 255 { ETOP1 exch 0 put } for
ETOP1 0 0 put
/VTOP1 [F00] def
/ETOP2 256 array def
0 1 255 { ETOP2 exch 0 put } for
ETOP2 0 0 put
/VTOP2 [F00] def
/ETOP3 256 array def
0 1 255 { ETOP3 exch 0 put } for
ETOP3 0 0 put
/VTOP3 [F00] def
/Vh0 [ VTOP1 aload pop ] def

Vh0 0 /Helvetica-Bold-latin1 /Helvetica-Bold Latin1Encoding put
/h0 ETOP1 Vh0 14.000000 ReDefFont
/Vh1 [ VTOP0 aload pop ] def

Vh1 0 /Helvetica-latin1 /Helvetica Latin1Encoding put
/h1 ETOP0 Vh1 12.000000 ReDefFont
/VH0 [ VTOP0 aload pop ] def

VH0 0 /Helvetica-latin1 /Helvetica Latin1Encoding put
/H0 ETOP0 VH0 12.000000 ReDefFont
/Vf0 [ VTOP0 aload pop ] def

Vf0 0 /Courier-latin1 /Courier Latin1Encoding put
/f0 ETOP0 Vf0 8.500000 ReDefFont
/Vf1 [ VTOP1 aload pop ] def

Vf1 0 /Courier-Bold-latin1 /Courier-Bold Latin1Encoding put
/f1 ETOP1 Vf1 8.500000 ReDefFont
/Vf2 [ VTOP2 aload pop ] def

Vf2 0 /Courier-Oblique-latin1 /Courier-Oblique Latin1Encoding put
/f2 ETOP2 Vf2 8.500000 ReDefFont
/Vf3 [ VTOP3 aload pop ] def

Vf3 0 /Courier-BoldOblique-latin1 /Courier-BoldOblique Latin1Encoding put
/f3 ETOP3 Vf3 8.500000 ReDefFont
BeginDoc
%%EndSetup

%%Page: 1 1
/Lines 59 def
/PageCount 1 def
1 BeginSheet
BeginDSCPage
/LineNumber 1 def
/PageNumber 1 def
/HeaderLinesLeft[
 [/h0 (*info*)]
 [/h1 ()]
]def
/HeaderLinesRight[
 [/h0 /pagenumberstring load]
 [/h1 (07/22/16)]
]def
2 SetHeaderLines
0 BeginPage
/f0 F
false BG
0.000 0.000 0.000 FG
0.933 0.933 0.925 FG
(F) S
(ile: emacs.info,  Node: ) S
0.000 0.000 0.000 FG
(PostScript) S
0.933 0.933 0.925 FG
(,  ) S
(Next: ) S
0.447 0.624 0.812 FG
(PostScript Variables) S
0.933 0.933 0.925 FG
(,  ) S
(Up: ) S
0.447 0.624 0.812 FG
(Printing) S
0.933 0.933 0.925 FG
PHL
LHL
0.000 0.000 0.000 FG
(39.1 PostScript Hardcopy) S
0.933 0.933 0.925 FG
PHL
LHL
(These commands convert buffer contents to PostScript, either printing it) S
LHL
(or leaving it in another Emacs buffer.) S
PHL
LHL
(?M-x ps-print-buffer?) S
LHL
(     Print hardcopy of the current buffer in PostScript form.) S
LHL
(?M-x ps-print-region?) S
LHL
(     Print hardcopy of the current region in PostScript form.) S
LHL
(?M-x ps-print-buffer-with-faces?) S
LHL
(     Print hardcopy of the current buffer in PostScript form, showing) S
LHL
(     the faces used in the text by means of PostScript features.) S
LHL
(?M-x ps-print-region-with-faces?) S
LHL
(     Print hardcopy of the current region in PostScript form, showing) S
LHL
(     the faces used in the text.) S
LHL
(?M-x ps-spool-buffer?) S
LHL
(     Generate and spool a PostScript image for the current buffer text.) S
LHL
(?M-x ps-spool-region?) S
LHL
(     Generate and spool a PostScript image for the current region.) S
LHL
(?M-x ps-spool-buffer-with-faces?) S
LHL
(     Generate and spool a PostScript image for the current buffer,) S
LHL
(     showing the faces used.) S
LHL
(?M-x ps-spool-region-with-faces?) S
LHL
(     Generate and spool a PostScript image for the current region,) S
LHL
(     showing the faces used.) S
LHL
(?M-x ps-despool?) S
LHL
(     Send the spooled PostScript to the printer.) S
LHL
(?M-x handwrite?) S
LHL
(     Generate/print PostScript for the current buffer as if handwritten.) S
PHL
LHL
(   The ?ps-print-buffer? and ?ps-print-region? commands print buffer) S
LHL
(contents in PostScript form.  One command prints the entire buffer; the) S
LHL
(other, just the region.  The commands ?ps-print-buffer-with-faces? and) S
LHL
(?ps-print-region-with-faces? behave similarly, but use PostScript) S
LHL
(features to show the faces \(fonts and colors\) of the buffer text.) S
PHL
LHL
(   Interactively, when you use a prefix argument \(?C-u?\), the command) S
LHL
(prompts the user for a file name, and saves the PostScript image in that) S
LHL
(file instead of sending it to the printer.) S
PHL
LHL
(   The commands whose names have ?spool? instead of ?print?, generate) S
LHL
(the PostScript output in an Emacs buffer instead of sending it to the) S
LHL
(printer.) S
PHL
LHL
(   Use the command ?ps-despool? to send the spooled images to the) S
LHL
(printer.  This command sends the PostScript generated by ?-spool-?) S
LHL
(commands \(see commands above\) to the printer.  With a prefix argument) S
LHL
(\(?C-u?\), it prompts for a file name, and saves the spooled PostScript) S
LHL
(image in that file instead of sending it to the printer.) S
PHL
LHL
(   ?M-x handwrite? is more frivolous.  It generates a PostScript) S
LHL
(rendition of the current buffer as a cursive handwritten document.  It) S
LHL
(can be customized in group ?handwrite?.  This function only supports ISO) S
LHL
(8859-1 characters.) S
PHL
EndPage
EndDSCPage
EndSheet

%%Trailer
%%Pages: 1

EndDoc

%%EOF
