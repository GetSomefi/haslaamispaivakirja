[Uno.Compiler.UxGenerated]
public partial class SettingsPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_title_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb6"
    };
    static SettingsPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SettingsPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = "Settings";
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::FlyingDock(router);
        temp_title_inst = new Haslaamispaivakirja_FlyingDock_title_Property(temp, __selector0);
        var temp3 = new global::Fuse.Navigation.PageExpression("Title");
        var temp4 = new global::Fuse.Reactive.Data("goToOldEntrys");
        var temp5 = "Tietojen tila: ";
        var temp6 = new global::Fuse.Reactive.Constant(temp5);
        var temp7 = new global::Fuse.Reactive.Data("dataExists");
        var temp1 = new global::basic.LabelText();
        temp1_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp8 = new global::Fuse.Reactive.Add(temp6, temp7);
        var temp9 = new global::Uno.UX.Resource("Title", temp2);
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::bgImage();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_title_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Controls.ScrollView();
        var temp14 = new global::Fuse.Controls.StackPanel();
        var temp15 = new global::header.Text();
        var temp16 = new global::basicBtn.Button();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp17 = new global::header.Text();
        var temp18 = new global::Fuse.Controls.Panel();
        var temp19 = new global::Fuse.Controls.Rectangle();
        var temp20 = new global::Fuse.Drawing.SolidColor();
        var temp21 = new global::basic.LabelText();
        var temp22 = new global::Fuse.Controls.Panel();
        var temp23 = new global::Fuse.Controls.Rectangle();
        var temp24 = new global::Fuse.Drawing.SolidColor();
        var temp25 = new global::basic.LabelText();
        var temp26 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::LongPressButton();
        var temp28 = new global::basic.LabelText();
        var temp29 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "SettingsPage.ux";
        temp10.LineNumber = 4;
        temp10.FileName = "SettingsPage.ux";
        temp10.SourceLineNumber = 4;
        temp10.SourceFileName = "SettingsPage.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../SettingsPage.js"));
        temp11.SourceLineNumber = 6;
        temp11.SourceFileName = "SettingsPage.ux";
        temp11.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/settings.jpg"));
        temp.SourceLineNumber = 8;
        temp.SourceFileName = "SettingsPage.ux";
        temp.Bindings.Add(temp12);
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "SettingsPage.ux";
        temp13.Padding = float4(0f, 0f, 0f, 0f);
        temp13.SourceLineNumber = 10;
        temp13.SourceFileName = "SettingsPage.ux";
        temp13.Background = temp29;
        temp13.Children.Add(temp14);
        temp14.Margin = float4(15f, 60f, 15f, 0f);
        temp14.SourceLineNumber = 12;
        temp14.SourceFileName = "SettingsPage.ux";
        temp14.Children.Add(temp15);
        temp14.Children.Add(temp16);
        temp14.Children.Add(temp17);
        temp14.Children.Add(temp18);
        temp14.Children.Add(temp21);
        temp14.Children.Add(temp22);
        temp14.Children.Add(temp25);
        temp14.Children.Add(temp1);
        temp14.Children.Add(temp27);
        temp14.Children.Add(temp28);
        temp15.Value = "Päiväkirjat";
        temp15.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp15.Margin = float4(0f, 0f, 0f, 0f);
        temp15.SourceLineNumber = 14;
        temp15.SourceFileName = "SettingsPage.ux";
        temp16.Text = "Näytä";
        temp16.BgColor = "#125F63";
        temp16.Margin = float4(0f, 30f, 0f, 30f);
        temp16.SourceLineNumber = 16;
        temp16.SourceFileName = "SettingsPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb6.OnEvent);
        temp16.Bindings.Add(temp_eb6);
        temp4.SourceLineNumber = 16;
        temp4.SourceFileName = "SettingsPage.ux";
        temp17.Value = "Asetukset";
        temp17.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp17.Margin = float4(0f, 0f, 0f, 0f);
        temp17.SourceLineNumber = 18;
        temp17.SourceFileName = "SettingsPage.ux";
        temp18.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
        temp18.Margin = float4(0f, 30f, 0f, 8f);
        temp18.SourceLineNumber = 21;
        temp18.SourceFileName = "SettingsPage.ux";
        temp18.Children.Add(temp19);
        temp19.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp19.SourceLineNumber = 22;
        temp19.SourceFileName = "SettingsPage.ux";
        temp19.Fills.Add(temp20);
        temp20.Color = float4(0.854902f, 0.2588235f, 0.2705882f, 1f);
        temp21.Value = "VAARA-ALUE";
        temp21.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp21.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp21.Color = float4(0.854902f, 0.2588235f, 0.2705882f, 1f);
        temp21.SourceLineNumber = 26;
        temp21.SourceFileName = "SettingsPage.ux";
        temp22.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
        temp22.Margin = float4(0f, 0f, 0f, 15f);
        temp22.SourceLineNumber = 27;
        temp22.SourceFileName = "SettingsPage.ux";
        temp22.Children.Add(temp23);
        temp23.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp23.SourceLineNumber = 28;
        temp23.SourceFileName = "SettingsPage.ux";
        temp23.Fills.Add(temp24);
        temp24.Color = float4(0.854902f, 0.2588235f, 0.2705882f, 1f);
        temp25.Value = "Voit halutessasi tyhjentää kaikki tiedot tästä laitteesta painamalla alla olevaa nappia pitkään.";
        temp25.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp25.SourceLineNumber = 33;
        temp25.SourceFileName = "SettingsPage.ux";
        temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp1.SourceLineNumber = 34;
        temp1.SourceFileName = "SettingsPage.ux";
        temp1.Bindings.Add(temp26);
        temp8.SourceLineNumber = 34;
        temp8.SourceFileName = "SettingsPage.ux";
        temp6.SourceLineNumber = 34;
        temp6.SourceFileName = "SettingsPage.ux";
        temp7.SourceLineNumber = 34;
        temp7.SourceFileName = "SettingsPage.ux";
        temp27.BackgroundColor = float4(0.854902f, 0.2588235f, 0.2705882f, 1f);
        temp27.SourceLineNumber = 36;
        temp27.SourceFileName = "SettingsPage.ux";
        temp28.Value = "Tietoja ei voi palauttaa takaisin!";
        temp28.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp28.FontSize = 15f;
        temp28.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp28.Color = float4(0.9803922f, 0.9960784f, 1f, 1f);
        temp28.Alignment = Fuse.Elements.Alignment.Default;
        temp28.Margin = float4(0f, 5f, 0f, 0f);
        temp28.Padding = float4(0f, 0f, 0f, 0f);
        temp28.SourceLineNumber = 38;
        temp28.SourceFileName = "SettingsPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb6);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
        this.Children.Add(temp);
        this.Children.Add(temp13);
        this.Resources.Add(temp9);
    }
    static global::Uno.UX.Selector __selector0 = "title";
    static global::Uno.UX.Selector __selector1 = "Value";
}
