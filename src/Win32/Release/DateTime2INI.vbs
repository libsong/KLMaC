'vbscript DateTime2INI.vbs 
'create an INI file with information about date and time 
'for easy access from Inno Setup PreProcessor
Dim fso, ts 
Const ForWriting = 2 
Set fso = CreateObject("Scripting.FileSystemObject") 
Set ts = fso.OpenTextFile("DateTime2INI.ini", ForWriting, True)
ts.WriteLine("") 
ts.WriteLine("[DateTime]") 
ts.WriteLine("Year=" & Year(Now()) ) 
mstr=Month(Now())
if len(mstr)<2 then mstr="0"&mstr
ts.WriteLine("Month=" & mstr ) 
dstr=Day(Now())
if len(dstr)<2 then dstr="0"&dstr
ts.WriteLine("Day=" & dstr )
hstr=Hour(Now())
if len(hstr)<2 then hstr="0"& hstr
ts.WriteLine("Hour=" & hstr ) 
mistr=Minute(Now())
if len(mistr)<2 then mistr="0"&mistr
ts.WriteLine("Minute=" & mistr ) 
sstr=Second(Now())
if len(sstr)<2 then sstr="0"&sstr
ts.WriteLine("Second=" & sstr )

ts.close 
set fso = nothing 