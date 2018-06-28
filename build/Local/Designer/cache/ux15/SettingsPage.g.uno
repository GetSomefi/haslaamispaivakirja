[Uno.Compiler.UxGenerated]
public partial class SettingsPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_title_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb11"
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
        var temp1 = "Settings";
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::FlyingDock(router);
        temp_title_inst = new Haslaamispaivakirja_FlyingDock_title_Property(temp, __selector0);
        var temp2 = new global::Fuse.Navigation.PageExpression("Title");
        var temp3 = new global::Fuse.Reactive.Data("goToOldEntrys");
        var temp4 = new global::Uno.UX.Resource("Title", temp1);
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.Image();
        var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_title_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp9 = new global::Fuse.Controls.ScrollView();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::header.Text();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::basicBtn.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp14 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "SettingsPage.ux";
        temp5.LineNumber = 4;
        temp5.FileName = "SettingsPage.ux";
        temp5.SourceLineNumber = 4;
        temp5.SourceFileName = "SettingsPage.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../SettingsPage.js"));
        temp6.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp6.Layer = Fuse.Layer.Background;
        temp6.SourceLineNumber = 6;
        temp6.SourceFileName = "SettingsPage.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/settings.jpg"));
        temp6.Background = temp7;
        temp.SourceLineNumber = 8;
        temp.SourceFileName = "SettingsPage.ux";
        temp.Bindings.Add(temp8);
        temp2.SourceLineNumber = 8;
        temp2.SourceFileName = "SettingsPage.ux";
        temp9.Padding = float4(0f, 0f, 0f, 0f);
        temp9.SourceLineNumber = 10;
        temp9.SourceFileName = "SettingsPage.ux";
        temp9.Background = temp14;
        temp9.Children.Add(temp10);
        temp10.Margin = float4(15f, 60f, 15f, 0f);
        temp10.SourceLineNumber = 12;
        temp10.SourceFileName = "SettingsPage.ux";
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp12);
        temp11.Value = "Asetukset";
        temp11.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp11.Margin = float4(0f, 0f, 0f, 0f);
        temp11.SourceLineNumber = 14;
        temp11.SourceFileName = "SettingsPage.ux";
        temp12.SourceLineNumber = 16;
        temp12.SourceFileName = "SettingsPage.ux";
        temp12.Children.Add(temp13);
        temp13.Text = "Tyhjennä";
        temp13.BgColor = "#DA4245";
        temp13.Margin = float4(0f, 15f, 0f, 15f);
        temp13.SourceLineNumber = 17;
        temp13.SourceFileName = "SettingsPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb11.OnEvent);
        temp13.Bindings.Add(temp_eb11);
        temp3.SourceLineNumber = 17;
        temp3.SourceFileName = "SettingsPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb11);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp);
        this.Children.Add(temp9);
        this.Resources.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "title";
}
