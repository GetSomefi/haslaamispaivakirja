[Uno.Compiler.UxGenerated]
public partial class FlyingDock: Fuse.Controls.Panel
{
    string _field_title;
    [global::Uno.UX.UXOriginSetter("Settitle")]
    public string title
    {
        get { return _field_title; }
        set { Settitle(value, null); }
    }
    public void Settitle(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_title)
        {
            _field_title = value;
            OnPropertyChanged("title", origin);
        }
    }
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<Fuse.Elements.Visibility> home_Visibility_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> back_Visibility_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> settings_Visibility_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> this_title_inst;
    internal global::Fuse.Controls.Rectangle home;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    internal global::Fuse.Controls.Rectangle back;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.Reactive.EventBinding temp_eb14;
    internal global::Fuse.Controls.Rectangle settings;
    internal global::Fuse.Reactive.EventBinding temp_eb15;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "home",
        "temp_eb12",
        "back",
        "temp_eb13",
        "temp_eb14",
        "settings",
        "temp_eb15"
    };
    static FlyingDock()
    {
    }
    [global::Uno.UX.UXConstructor]
    public FlyingDock(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        this_title_inst = new Haslaamispaivakirja_FlyingDock_title_Property(this, __selector0);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("goHome");
        var temp3 = new global::Fuse.Reactive.Data("goBack");
        var temp4 = new global::Fuse.Reactive.Data("goSplash");
        var temp5 = new global::Fuse.Reactive.Data("goSettings");
        home = new global::Fuse.Controls.Rectangle();
        home_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(home, __selector1);
        back = new global::Fuse.Controls.Rectangle();
        back_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(back, __selector1);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Triggers.WhileString();
        temp_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileString_Value_Property(temp, __selector2);
        var temp7 = new global::Fuse.Reactive.Property(temp6, Haslaamispaivakirja_accessor_FlyingDock_title.Singleton);
        settings = new global::Fuse.Controls.Rectangle();
        settings_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(settings, __selector1);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Triggers.WhileString();
        temp1_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileString_Value_Property(temp1, __selector2);
        var temp9 = new global::Fuse.Reactive.Property(temp8, Haslaamispaivakirja_accessor_FlyingDock_title.Singleton);
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.DockPanel();
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Drawing.LinearGradient();
        var temp14 = new global::Fuse.Drawing.GradientStop();
        var temp15 = new global::Fuse.Drawing.GradientStop();
        var temp16 = new global::Fuse.Controls.Grid();
        var temp17 = new global::Fuse.Controls.StackPanel();
        var temp18 = new global::fa_home();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp19 = new global::fa_chevron_left();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp20 = new global::Fuse.Controls.StackPanel();
        var temp21 = new global::header.Text();
        temp_eb14 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp22 = new global::Fuse.Controls.StackPanel();
        var temp23 = new global::fa_cog();
        temp_eb15 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp24 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(home_Visibility_inst);
        var temp25 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(back_Visibility_inst);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(settings_Visibility_inst);
        var temp28 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/FlyingDock.ux";
        temp10.LineNumber = 4;
        temp10.FileName = "Components/FlyingDock.ux";
        temp10.SourceLineNumber = 4;
        temp10.SourceFileName = "Components/FlyingDock.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../Components/FlyingDock.js"));
        temp11.Alignment = Fuse.Elements.Alignment.Top;
        temp11.Layer = Fuse.Layer.Overlay;
        temp11.SourceLineNumber = 5;
        temp11.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Top);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp);
        temp11.Children.Add(temp1);
        temp12.SourceLineNumber = 6;
        temp12.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Fill);
        temp12.Fills.Add(temp13);
        temp12.Children.Add(temp16);
        temp13.Stops.Add(temp14);
        temp13.Stops.Add(temp15);
        temp14.Offset = 0f;
        temp14.Color = float4(0f, 0f, 0f, 0.3490196f);
        temp15.Offset = 1f;
        temp15.Color = float4(0f, 0f, 0f, 0f);
        temp16.DefaultRow = "50";
        temp16.Columns = "1*,4*,1*";
        temp16.DefaultColumn = "auto";
        temp16.Margin = float4(0f, 0f, 0f, 15f);
        temp16.Padding = float4(0f, 10f, 0f, 0f);
        temp16.SourceLineNumber = 12;
        temp16.SourceFileName = "Components/FlyingDock.ux";
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp20);
        temp16.Children.Add(temp22);
        temp17.Margin = float4(5f, 0f, 5f, 0f);
        temp17.SourceLineNumber = 13;
        temp17.SourceFileName = "Components/FlyingDock.ux";
        temp17.Children.Add(home);
        temp17.Children.Add(back);
        home.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        home.Name = __selector3;
        home.SourceLineNumber = 14;
        home.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(home, temp_eb12.OnEvent);
        home.Children.Add(temp18);
        home.Bindings.Add(temp_eb12);
        temp18.FontSize = 18f;
        temp18.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp18.Color = Fuse.Drawing.Colors.White;
        temp18.Alignment = Fuse.Elements.Alignment.Default;
        temp18.Margin = float4(10f, 5f, 5f, 5f);
        temp18.Opacity = 1f;
        temp18.SourceLineNumber = 15;
        temp18.SourceFileName = "Components/FlyingDock.ux";
        temp2.SourceLineNumber = 14;
        temp2.SourceFileName = "Components/FlyingDock.ux";
        back.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        back.Visibility = Fuse.Elements.Visibility.Collapsed;
        back.Name = __selector4;
        back.SourceLineNumber = 17;
        back.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(back, temp_eb13.OnEvent);
        back.Children.Add(temp19);
        back.Bindings.Add(temp_eb13);
        temp19.FontSize = 18f;
        temp19.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp19.Color = Fuse.Drawing.Colors.White;
        temp19.Alignment = Fuse.Elements.Alignment.Default;
        temp19.Margin = float4(10f, 5f, 5f, 5f);
        temp19.Opacity = 1f;
        temp19.SourceLineNumber = 18;
        temp19.SourceFileName = "Components/FlyingDock.ux";
        temp3.SourceLineNumber = 17;
        temp3.SourceFileName = "Components/FlyingDock.ux";
        temp20.Margin = float4(5f, 0f, 5f, 0f);
        temp20.SourceLineNumber = 22;
        temp20.SourceFileName = "Components/FlyingDock.ux";
        temp20.Children.Add(temp21);
        temp21.Value = "The Mood";
        temp21.FontSize = 20f;
        temp21.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp21.Alignment = Fuse.Elements.Alignment.Default;
        temp21.Margin = float4(0f, 4f, 0f, 0f);
        temp21.SourceLineNumber = 23;
        temp21.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb14.OnEvent);
        temp21.Bindings.Add(temp_eb14);
        temp4.SourceLineNumber = 23;
        temp4.SourceFileName = "Components/FlyingDock.ux";
        temp22.Margin = float4(5f, 0f, 5f, 0f);
        temp22.SourceLineNumber = 26;
        temp22.SourceFileName = "Components/FlyingDock.ux";
        temp22.Children.Add(settings);
        settings.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        settings.Name = __selector5;
        settings.SourceLineNumber = 27;
        settings.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(settings, temp_eb15.OnEvent);
        settings.Children.Add(temp23);
        settings.Bindings.Add(temp_eb15);
        temp23.FontSize = 18f;
        temp23.TextAlignment = Fuse.Controls.TextAlignment.Right;
        temp23.Color = Fuse.Drawing.Colors.White;
        temp23.Alignment = Fuse.Elements.Alignment.Default;
        temp23.Margin = float4(5f, 5f, 10f, 5f);
        temp23.Opacity = 1f;
        temp23.SourceLineNumber = 28;
        temp23.SourceFileName = "Components/FlyingDock.ux";
        temp5.SourceLineNumber = 27;
        temp5.SourceFileName = "Components/FlyingDock.ux";
        temp.Equals = "Home";
        temp.SourceLineNumber = 35;
        temp.SourceFileName = "Components/FlyingDock.ux";
        temp.Animators.Add(temp24);
        temp.Animators.Add(temp25);
        temp.Bindings.Add(temp26);
        temp24.Value = Fuse.Elements.Visibility.Collapsed;
        temp25.Value = Fuse.Elements.Visibility.Visible;
        temp7.SourceLineNumber = 35;
        temp7.SourceFileName = "Components/FlyingDock.ux";
        temp6.SourceLineNumber = 35;
        temp6.SourceFileName = "Components/FlyingDock.ux";
        temp1.Equals = "Settings";
        temp1.SourceLineNumber = 39;
        temp1.SourceFileName = "Components/FlyingDock.ux";
        temp1.Animators.Add(temp27);
        temp1.Bindings.Add(temp28);
        temp27.Value = Fuse.Elements.Visibility.Collapsed;
        temp9.SourceLineNumber = 39;
        temp9.SourceFileName = "Components/FlyingDock.ux";
        temp8.SourceLineNumber = 39;
        temp8.SourceFileName = "Components/FlyingDock.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(home);
        __g_nametable.Objects.Add(temp_eb12);
        __g_nametable.Objects.Add(back);
        __g_nametable.Objects.Add(temp_eb13);
        __g_nametable.Objects.Add(temp_eb14);
        __g_nametable.Objects.Add(settings);
        __g_nametable.Objects.Add(temp_eb15);
        __g_nametable.Properties.Add(this_title_inst);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "title";
    static global::Uno.UX.Selector __selector1 = "Visibility";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "home";
    static global::Uno.UX.Selector __selector4 = "back";
    static global::Uno.UX.Selector __selector5 = "settings";
}
