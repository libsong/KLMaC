; 脚本由 Inno Setup 脚本向导 生成！
; 有关创建 Inno Setup 脚本文件的详细资料请查阅帮助文档！

#define MyAppName "KL_MaC"
#define MyAppVersion "1.0.0"
#define MyAppPublisher "上海科梁信息工程股份有限公司"
#define MyAppURL "www.keliangtek.com"
#define MyAppExeName "KL_MaC.exe"  

[Setup]
; 注: AppId的值为单独标识该应用程序。
; 不要为其他安装程序使用相同的AppId值。
; (生成新的GUID，点击 工具|在IDE中生成GUID。)
AppId={{9EE8C270-DCDE-4382-95E0-07E857966A94}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DisableProgramGroupPage=yes
OutputDir=.                             
OutputBaseFilename=KL_MaC setup v1.0.d
Compression=lzma
SolidCompression=yes

[Files]
Source: psvince.dll; Flags: dontcopy
Source: vc2015_redist\vc_redist.x86.exe; DestDir: "{tmp}"; Check: not IsWin64  
Source: vc2015_redist\vc_redist.x64.exe; DestDir: "{tmp}"; Check: IsWin64 

[code]
function IsModuleLoaded(modulename: String ): Boolean;
external 'IsModuleLoaded@files:psvince.dll stdcall setuponly';

function IsAppRunning(const FileName : string): Boolean;
var
    FSWbemLocator: Variant;
    FWMIService   : Variant;
    FWbemObjectSet: Variant;
begin
    Result := false;
    try
      FSWbemLocator := CreateOleObject('WBEMScripting.SWBEMLocator');
      FWMIService := FSWbemLocator.ConnectServer('', 'root\CIMV2', '', '');
      FWbemObjectSet := FWMIService.ExecQuery(Format('SELECT Name FROM Win32_Process Where Name="%s"',[FileName]));
      Result := (FWbemObjectSet.Count > 0);
      FWbemObjectSet := Unassigned;
      FWMIService := Unassigned;
      FSWbemLocator := Unassigned;
    except
      if (IsModuleLoaded(FileName)) then
        begin
          Result := false;
        end
      else
        begin
          Result := true;
        end
      end;
end;

 

function NeedInstallVC14SP1(): Boolean;
begin  
	Result := true;
	if IsWin64 then
		begin  
			if RegValueExists(HKLM64, 'SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\{BC958BD2-5DAC-3862-BB1A-C1BE0790438D}', 'UninstallString') then
				begin
					Result := false;
				end    
		end
	else
		begin
			if RegValueExists(HKLM, 'SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\{74d0e5db-b326-4dae-a6b2-445b9de1836e}', 'UninstallString') then
				begin
					Result := false;
				end  
		end   
end; 

function InitializeSetup(): Boolean;
var
	KeynotExist:boolean;   
	ResultCode: Integer;   
	uicmd: String;   
begin
	Result := true;
	if  IsAppRunning('{#MyAppExeName}') then
		begin
			MsgBox('安装程序检测到 {#MyAppName} 正在运行，请先关闭程序！'#13'单击“确定”按钮后退出安装！', mbInformation, MB_OK);
			Result:=false;
		end
	else
		begin   
			KeynotExist:= true;   
			if RegQueryStringValue(HKEY_LOCAL_MACHINE,'SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\{9EE8C270-DCDE-4382-95E0-07E857966A94}_is1', 'UninstallString', uicmd) then   
			begin   
			KeynotExist:= false; 
			MsgBox ('本程序已经安装，点击确定卸载后再安装本程序 !', mbError, MB_OK);
			Exec(RemoveQuotes(uicmd), '', '', SW_SHOW, ewWaitUntilTerminated, ResultCode);   
			end;   
			Result:= KeynotExist   
		end;	
end;

function InitializeUninstall(): Boolean;
begin
  Result :=true; //安装程序继续
  if IsAppRunning('{#MyAppExeName}') then
  begin
    Msgbox('卸载程序检测到 {#MyAppName} 正在运行，请先关闭程序！'#13'单击“确定”按钮后退出卸载！', mbConfirmation, MB_OK);
    Result :=false; //安装程序退出
  end;
end;

[Languages]
Name: "chinesesimp"; MessagesFile: "compiler:Default.isl"
Name: "english"; MessagesFile: "compiler:Languages\English.isl"

;[Tasks]
;Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: checkablealone; OnlyBelowVersion: 0,6.1

[Files]
Source: KL_MaC.exe; DestDir: "{app}"; Flags: ignoreversion
Source: bearer\*; DestDir: "{app}\bearer\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: iconengines\*; DestDir: "{app}\iconengines\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: imageformats\*; DestDir: "{app}\imageformats\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: platforms\*; DestDir: "{app}\platforms\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: translations\*; DestDir: "{app}\translations\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: D3Dcompiler_47.dll; DestDir: "{app}"; Flags: ignoreversion
Source: libEGLd.dll; DestDir: "{app}"; Flags: ignoreversion
Source: libGLESV2d.dll; DestDir: "{app}"; Flags: ignoreversion
Source: opengl32sw.dll; DestDir: "{app}"; Flags: ignoreversion                   
Source: Qt5Cored.dll; DestDir: "{app}"; Flags: ignoreversion
Source: Qt5Guid.dll; DestDir: "{app}"; Flags: ignoreversion
Source: Qt5Networkd.dll; DestDir: "{app}"; Flags: ignoreversion
Source: Qt5Svgd.dll; DestDir: "{app}"; Flags: ignoreversion
Source: Qt5Widgetsd.dll; DestDir: "{app}"; Flags: ignoreversion
Source: desktopicon\*; DestDir: "{app}\desktopicon\"; Flags: ignoreversion recursesubdirs createallsubdirs
; 注意: 不要在任何共享系统文件上使用“Flags: ignoreversion”

[Icons]
Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon;IconFilename: "{app}\desktopicon\klmac.ico"

[Tasks]  
Name: "DesktopIcon"; Description: "创建桌面快捷方式图标"  

[Run]
Filename: "{tmp}\vc_redist.x86.exe"; Parameters: /IsWin64 /q; WorkingDir: {tmp}; Flags: skipifdoesntexist; StatusMsg: "Install Microsoft Visual C++ 2015 x86 Runtime ..."; Check: NeedInstallVC14SP1 ; Check not IsWin64
Filename: "{tmp}\vc_redist.x64.exe"; Parameters: /IsWin64 /q; WorkingDir: {tmp}; Flags: skipifdoesntexist; StatusMsg: "Install Microsoft Visual C++ 2015 x64 Runtime ..."; Check: NeedInstallVC14SP1 ; Check IsWin64

Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

;http://blog.csdn.net/cnbata/article/details/6289031

[code]
procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
	begin
		if CurUninstallStep = usUninstall then
			if MsgBox('您是否要删除所有用户配置信息？', mbConfirmation, MB_YESNO) = IDYES then
			DelTree(ExpandConstant('{app}'), True, True, True);
	end;
[/code] 
