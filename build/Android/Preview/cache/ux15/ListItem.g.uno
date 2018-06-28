[Uno.Compiler.UxGenerated]
public partial class ListItem: Fuse.Controls.Panel
{
    string _field_TheValue;
    [global::Uno.UX.UXOriginSetter("SetTheValue")]
    public string TheValue
    {
        get { return _field_TheValue; }
        set { SetTheValue(value, null); }
    }
    public void SetTheValue(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TheValue)
        {
            _field_TheValue = value;
            OnPropertyChanged("TheValue", origin);
        }
    }
    string _field_RealLabel;
    [global::Uno.UX.UXOriginSetter("SetRealLabel")]
    public string RealLabel
    {
        get { return _field_RealLabel; }
        set { SetRealLabel(value, null); }
    }
    public void SetRealLabel(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_RealLabel)
        {
            _field_RealLabel = value;
            OnPropertyChanged("RealLabel", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> temp2_Visibility_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> temp3_Visibility_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> this_TheValue_inst;
    global::Uno.UX.Property<string> this_RealLabel_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static ListItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ListItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(this, __selector0);
        this_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp, __selector2);
        var temp5 = new global::Fuse.Reactive.Data("localLabel2");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp1, __selector2);
        var temp6 = new global::Fuse.Reactive.Data("localLabel");
        var temp2 = new global::Fuse.Controls.Rectangle();
        temp2_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(temp2, __selector3);
        var temp7 = new global::Fuse.Reactive.Data("visibleValue");
        var temp3 = new global::Fuse.Controls.StackPanel();
        temp3_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(temp3, __selector3);
        var temp8 = new global::Fuse.Reactive.Data("visible");
        var temp4 = new global::Fuse.Triggers.WhileString();
        temp4_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileString_Value_Property(temp4, __selector2);
        var temp9 = new global::Fuse.Reactive.Data("localLabel");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Drawing.SolidColor();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Drawing.SolidColor();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp2_Visibility_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Reactive.DataBinding(temp3_Visibility_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/ListItem.ux";
        temp10.LineNumber = 2;
        temp10.FileName = "Components/ListItem.ux";
        temp10.SourceLineNumber = 2;
        temp10.SourceFileName = "Components/ListItem.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../Components/Listitem.js"));
        temp4.Test = Fuse.Triggers.WhileStringTest.IsNotEmpty;
        temp4.SourceLineNumber = 5;
        temp4.SourceFileName = "Components/ListItem.ux";
        temp4.Nodes.Add(temp3);
        temp4.Bindings.Add(temp19);
        temp3.SourceLineNumber = 6;
        temp3.SourceFileName = "Components/ListItem.ux";
        temp3.Children.Add(temp11);
        temp3.Bindings.Add(temp18);
        temp11.Margin = float4(15f, 2f, 15f, 2f);
        temp11.SourceLineNumber = 7;
        temp11.SourceFileName = "Components/ListItem.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp2);
        temp12.Margin = float4(0f, 0f, 0f, 10f);
        temp12.Padding = float4(0f, 10f, 0f, 10f);
        temp12.SourceLineNumber = 8;
        temp12.SourceFileName = "Components/ListItem.ux";
        temp12.Fills.Add(temp13);
        temp12.Children.Add(temp);
        temp13.Color = float4(1f, 0.9843137f, 0.9843137f, 0.4980392f);
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.Color = float4(0f, 0f, 0f, 0.6666667f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "Components/ListItem.ux";
        temp.Bindings.Add(temp14);
        temp5.SourceLineNumber = 10;
        temp5.SourceFileName = "Components/ListItem.ux";
        temp2.Margin = float4(0f, -10f, 0f, 0f);
        temp2.Padding = float4(15f, 10f, 15f, 10f);
        temp2.SourceLineNumber = 12;
        temp2.SourceFileName = "Components/ListItem.ux";
        temp2.Fills.Add(temp15);
        temp2.Children.Add(temp1);
        temp2.Bindings.Add(temp17);
        temp15.Color = float4(0.9686275f, 0.9686275f, 1f, 0.6980392f);
        temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp1.Color = float4(0f, 0f, 0f, 0.6666667f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.Padding = float4(0f, 0f, 0f, 0f);
        temp1.SourceLineNumber = 14;
        temp1.SourceFileName = "Components/ListItem.ux";
        temp1.Bindings.Add(temp16);
        temp6.SourceLineNumber = 14;
        temp6.SourceFileName = "Components/ListItem.ux";
        temp7.SourceLineNumber = 12;
        temp7.SourceFileName = "Components/ListItem.ux";
        temp8.SourceLineNumber = 6;
        temp8.SourceFileName = "Components/ListItem.ux";
        temp9.SourceLineNumber = 5;
        temp9.SourceFileName = "Components/ListItem.ux";
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_TheValue_inst);
        __g_nametable.Properties.Add(this_RealLabel_inst);
        this.Children.Add(temp10);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "TheValue";
    static global::Uno.UX.Selector __selector1 = "RealLabel";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Visibility";
}
