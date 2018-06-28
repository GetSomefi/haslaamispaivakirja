[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb13"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goToFirstPage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::Fuse.Controls.Video();
        var temp4 = new global::Fuse.Effects.Blur();
        var temp5 = new global::generaltext.Text();
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Controls.StackPanel();
        var temp8 = new global::header.Text();
        var temp9 = new global::generaltext.Text();
        var temp10 = new global::basicBtn.Button();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp);
        this.SourceLineNumber = 1;
        this.SourceFileName = "SplashPage.ux";
        temp1.LineNumber = 4;
        temp1.FileName = "SplashPage.ux";
        temp1.SourceLineNumber = 4;
        temp1.SourceFileName = "SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../SplashPage.js"));
        temp2.ClipToBounds = true;
        temp2.SourceLineNumber = 6;
        temp2.SourceFileName = "SplashPage.ux";
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp6);
        temp3.IsLooping = true;
        temp3.AutoPlay = true;
        temp3.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp3.Opacity = 0.7f;
        temp3.Layer = Fuse.Layer.Background;
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "SplashPage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/retkelleoma.mp4"));
        temp3.Children.Add(temp4);
        temp4.Radius = 3.75f;
        temp4.SourceLineNumber = 9;
        temp4.SourceFileName = "SplashPage.ux";
        temp5.Value = "original video by Peter Virtanen";
        temp5.FontSize = 12f;
        temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp5.Margin = float4(15f, 15f, 15f, 15f);
        temp5.Opacity = 0.5f;
        temp5.SourceLineNumber = 12;
        temp5.SourceFileName = "SplashPage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Bottom);
        temp6.RowCount = 2;
        temp6.SourceLineNumber = 14;
        temp6.SourceFileName = "SplashPage.ux";
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp10);
        temp7.SourceLineNumber = 15;
        temp7.SourceFileName = "SplashPage.ux";
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp9);
        temp8.Value = "The Mood";
        temp8.FontSize = 40f;
        temp8.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp8.Margin = float4(0f, 50f, 0f, 0f);
        temp8.SourceLineNumber = 16;
        temp8.SourceFileName = "SplashPage.ux";
        temp9.Value = "How are we feeling today?";
        temp9.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp9.Opacity = 0.5f;
        temp9.SourceLineNumber = 17;
        temp9.SourceFileName = "SplashPage.ux";
        temp10.Text = "Aloitetaan";
        temp10.FontSize = 18f;
        temp10.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp10.Margin = float4(50f, 0f, 50f, 0f);
        temp10.SourceLineNumber = 20;
        temp10.SourceFileName = "SplashPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb13.OnEvent);
        temp10.Bindings.Add(temp_eb13);
        temp.SourceLineNumber = 20;
        temp.SourceFileName = "SplashPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb13);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
