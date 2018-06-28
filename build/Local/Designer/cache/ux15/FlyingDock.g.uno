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
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    internal global::Fuse.Controls.Rectangle back;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    internal global::Fuse.Reactive.EventBinding temp_eb18;
    internal global::Fuse.Controls.Rectangle settings;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "home",
        "temp_eb16",
        "back",
        "temp_eb17",
        "temp_eb18",
        "settings",
        "temp_eb19"
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
        var temp12 = new global::Fuse.Controls.Grid();
        var temp13 = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::fa_home();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp15 = new global::fa_chevron_left();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp16 = new global::Fuse.Controls.StackPanel();
        var temp17 = new global::header.Text();
        temp_eb18 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp18 = new global::Fuse.Controls.StackPanel();
        var temp19 = new global::fa_cog();
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp20 = new global::Fuse.Drawing.LinearGradient();
        var temp21 = new global::Fuse.Drawing.GradientStop();
        var temp22 = new global::Fuse.Drawing.GradientStop();
        var temp23 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(home_Visibility_inst);
        var temp24 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(back_Visibility_inst);
        var temp25 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(settings_Visibility_inst);
        var temp27 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/FlyingDock.ux";
        temp10.LineNumber = 4;
        temp10.FileName = "Components/FlyingDock.ux";
        temp10.SourceLineNumber = 4;
        temp10.SourceFileName = "Components/FlyingDock.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../Components/FlyingDock.js"));
        temp11.SourceLineNumber = 5;
        temp11.SourceFileName = "Components/FlyingDock.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp);
        temp11.Children.Add(temp1);
        temp12.ColumnCount = 3;
        temp12.Margin = float4(0f, 0f, 0f, 15f);
        temp12.Padding = float4(0f, 15f, 0f, 0f);
        temp12.SourceLineNumber = 6;
        temp12.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Background = temp20;
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp16);
        temp12.Children.Add(temp18);
        temp13.Margin = float4(5f, 0f, 5f, 0f);
        temp13.SourceLineNumber = 8;
        temp13.SourceFileName = "Components/FlyingDock.ux";
        temp13.Children.Add(home);
        temp13.Children.Add(back);
        home.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        home.Name = __selector3;
        home.SourceLineNumber = 9;
        home.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(home, temp_eb16.OnEvent);
        home.Children.Add(temp14);
        home.Bindings.Add(temp_eb16);
        temp14.FontSize = 18f;
        temp14.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp14.Color = Fuse.Drawing.Colors.White;
        temp14.Alignment = Fuse.Elements.Alignment.Default;
        temp14.Margin = float4(10f, 5f, 5f, 5f);
        temp14.Opacity = 1f;
        temp14.SourceLineNumber = 10;
        temp14.SourceFileName = "Components/FlyingDock.ux";
        temp2.SourceLineNumber = 9;
        temp2.SourceFileName = "Components/FlyingDock.ux";
        back.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        back.Visibility = Fuse.Elements.Visibility.Collapsed;
        back.Name = __selector4;
        back.SourceLineNumber = 12;
        back.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(back, temp_eb17.OnEvent);
        back.Children.Add(temp15);
        back.Bindings.Add(temp_eb17);
        temp15.FontSize = 18f;
        temp15.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp15.Color = Fuse.Drawing.Colors.White;
        temp15.Alignment = Fuse.Elements.Alignment.Default;
        temp15.Margin = float4(10f, 5f, 5f, 5f);
        temp15.Opacity = 1f;
        temp15.SourceLineNumber = 13;
        temp15.SourceFileName = "Components/FlyingDock.ux";
        temp3.SourceLineNumber = 12;
        temp3.SourceFileName = "Components/FlyingDock.ux";
        temp16.Margin = float4(5f, 0f, 5f, 0f);
        temp16.SourceLineNumber = 17;
        temp16.SourceFileName = "Components/FlyingDock.ux";
        temp16.Children.Add(temp17);
        temp17.Value = "The Mood";
        temp17.FontSize = 20f;
        temp17.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp17.Alignment = Fuse.Elements.Alignment.Default;
        temp17.Margin = float4(0f, 4f, 0f, 0f);
        temp17.SourceLineNumber = 18;
        temp17.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb18.OnEvent);
        temp17.Bindings.Add(temp_eb18);
        temp4.SourceLineNumber = 18;
        temp4.SourceFileName = "Components/FlyingDock.ux";
        temp18.Margin = float4(5f, 0f, 5f, 0f);
        temp18.SourceLineNumber = 21;
        temp18.SourceFileName = "Components/FlyingDock.ux";
        temp18.Children.Add(settings);
        settings.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        settings.Name = __selector5;
        settings.SourceLineNumber = 22;
        settings.SourceFileName = "Components/FlyingDock.ux";
        global::Fuse.Gestures.Clicked.AddHandler(settings, temp_eb19.OnEvent);
        settings.Children.Add(temp19);
        settings.Bindings.Add(temp_eb19);
        temp19.FontSize = 18f;
        temp19.TextAlignment = Fuse.Controls.TextAlignment.Right;
        temp19.Color = Fuse.Drawing.Colors.White;
        temp19.Alignment = Fuse.Elements.Alignment.Default;
        temp19.Margin = float4(5f, 5f, 10f, 5f);
        temp19.Opacity = 1f;
        temp19.SourceLineNumber = 23;
        temp19.SourceFileName = "Components/FlyingDock.ux";
        temp5.SourceLineNumber = 22;
        temp5.SourceFileName = "Components/FlyingDock.ux";
        temp20.Stops.Add(temp21);
        temp20.Stops.Add(temp22);
        temp21.Offset = 0f;
        temp21.Color = float4(0f, 0f, 0f, 0.3490196f);
        temp22.Offset = 1f;
        temp22.Color = float4(0f, 0f, 0f, 0f);
        temp.Equals = "Home";
        temp.SourceLineNumber = 33;
        temp.SourceFileName = "Components/FlyingDock.ux";
        temp.Animators.Add(temp23);
        temp.Animators.Add(temp24);
        temp.Bindings.Add(temp25);
        temp23.Value = Fuse.Elements.Visibility.Collapsed;
        temp24.Value = Fuse.Elements.Visibility.Visible;
        temp7.SourceLineNumber = 33;
        temp7.SourceFileName = "Components/FlyingDock.ux";
        temp6.SourceLineNumber = 33;
        temp6.SourceFileName = "Components/FlyingDock.ux";
        temp1.Equals = "Settings";
        temp1.SourceLineNumber = 37;
        temp1.SourceFileName = "Components/FlyingDock.ux";
        temp1.Animators.Add(temp26);
        temp1.Bindings.Add(temp27);
        temp26.Value = Fuse.Elements.Visibility.Collapsed;
        temp9.SourceLineNumber = 37;
        temp9.SourceFileName = "Components/FlyingDock.ux";
        temp8.SourceLineNumber = 37;
        temp8.SourceFileName = "Components/FlyingDock.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(home);
        __g_nametable.Objects.Add(temp_eb16);
        __g_nametable.Objects.Add(back);
        __g_nametable.Objects.Add(temp_eb17);
        __g_nametable.Objects.Add(temp_eb18);
        __g_nametable.Objects.Add(settings);
        __g_nametable.Objects.Add(temp_eb19);
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
