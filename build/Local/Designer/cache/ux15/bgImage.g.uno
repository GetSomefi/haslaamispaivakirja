[Uno.Compiler.UxGenerated]
public partial class bgImage: Fuse.Controls.Panel
{
    Uno.UX.FileSource _field_File;
    [global::Uno.UX.UXOriginSetter("SetFile")]
    public Uno.UX.FileSource File
    {
        get { return _field_File; }
        set { SetFile(value, null); }
    }
    public void SetFile(Uno.UX.FileSource value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_File)
        {
            _field_File = value;
            OnPropertyChanged("File", origin);
        }
    }
    string _field_StretchMode;
    [global::Uno.UX.UXOriginSetter("SetStretchMode")]
    public string StretchMode
    {
        get { return _field_StretchMode; }
        set { SetStretchMode(value, null); }
    }
    public void SetStretchMode(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_StretchMode)
        {
            _field_StretchMode = value;
            OnPropertyChanged("StretchMode", origin);
        }
    }
    float4 _field_Background;
    [global::Uno.UX.UXOriginSetter("SetBackground")]
    public float4 Background
    {
        get { return _field_Background; }
        set { SetBackground(value, null); }
    }
    public void SetBackground(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Background)
        {
            _field_Background = value;
            OnPropertyChanged("Background", origin);
        }
    }
    global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
    global::Uno.UX.Property<Fuse.Elements.StretchMode> temp_StretchMode_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp_Background_inst;
    static bgImage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public bgImage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Image();
        temp_File_inst = new Haslaamispaivakirja_FuseControlsImage_File_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, Haslaamispaivakirja_accessor_bgImage_File.Singleton);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_StretchMode_inst = new Haslaamispaivakirja_FuseControlsImage_StretchMode_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, Haslaamispaivakirja_accessor_bgImage_StretchMode.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_Background_inst = new Haslaamispaivakirja_FuseControlsControl_Background_Property(temp, __selector2);
        var temp6 = new global::Fuse.Reactive.Property(temp5, Haslaamispaivakirja_accessor_bgImage_Background.Singleton);
        var temp7 = new global::Fuse.Controls.StackPanel();
        var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_StretchMode_inst, temp4, Fuse.Reactive.BindingMode.Read);
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Background_inst, temp6, Fuse.Reactive.BindingMode.Read);
        this.StretchMode = "UniformToFill";
        this.Background = float4(1f, 1f, 0.1333333f, 1f);
        this.Layer = Fuse.Layer.Background;
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/bgImage.ux";
        temp7.SourceLineNumber = 6;
        temp7.SourceFileName = "Components/bgImage.ux";
        temp7.Background = temp8;
        temp.SourceLineNumber = 7;
        temp.SourceFileName = "Components/bgImage.ux";
        temp.Bindings.Add(temp9);
        temp.Bindings.Add(temp10);
        temp.Bindings.Add(temp11);
        temp2.SourceLineNumber = 7;
        temp2.SourceFileName = "Components/bgImage.ux";
        temp1.SourceLineNumber = 7;
        temp1.SourceFileName = "Components/bgImage.ux";
        temp4.SourceLineNumber = 7;
        temp4.SourceFileName = "Components/bgImage.ux";
        temp3.SourceLineNumber = 7;
        temp3.SourceFileName = "Components/bgImage.ux";
        temp6.SourceLineNumber = 7;
        temp6.SourceFileName = "Components/bgImage.ux";
        temp5.SourceLineNumber = 7;
        temp5.SourceFileName = "Components/bgImage.ux";
        this.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/vuoristomaisema.jpg"));
        this.Children.Add(temp7);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "File";
    static global::Uno.UX.Selector __selector1 = "StretchMode";
    static global::Uno.UX.Selector __selector2 = "Background";
}
