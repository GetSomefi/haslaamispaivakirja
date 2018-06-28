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
    global::Uno.UX.Property<string> temp3_Value_inst;
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
        var temp4 = new global::Fuse.Reactive.Data("localLabel2");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp1, __selector2);
        var temp5 = new global::Fuse.Reactive.Data("localLabel");
        var temp2 = new global::Fuse.Controls.Rectangle();
        temp2_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(temp2, __selector3);
        var temp6 = new global::Fuse.Reactive.Data("visibleValue");
        var temp3 = new global::Fuse.Triggers.WhileString();
        temp3_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileString_Value_Property(temp3, __selector2);
        var temp7 = new global::Fuse.Reactive.Data("visible");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Drawing.SolidColor();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Drawing.SolidColor();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Visibility_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/ListItem.ux";
        temp8.Code = "\n\t\t//console.log(\"List item module init!\");\n\t\tvar visibleValue = this.TheValue.map(function(x) {\t\t\t\t\t\t\n\t\t\tif(x == \"True\" || x == \"False\"){\n\t\t\t\treturn \"Collapsed\";\n\t\t\t}else{ \n\t\t\t\treturn \"Visible\";\n\t\t\t}\n\t\t});\n\t\tvar localLabel = this.TheValue.map(function(x) {\n\t\t\tif(x != \"True\" && x != \"False\"){\n\t\t\t\treturn x;\n\t\t\t}\n\t\t});\n\t\tvar localLabel2 = this.RealLabel.map(function(labelValue) {\n\t\t\treturn labelValue;\n\t\t});\n\t\tvar visible = this.TheValue.map(function(x) {\n\t\t\tvar boolean;\n\t\t\tvar val;\n\t\t\tif(x === \"True\"){\n\t\t\t\tboolean = true;\n\t\t\t}else if(x === \"False\" || x === \"\"){\n\t\t\t\tboolean = false;\n\t\t\t}else{\n\t\t\t\tboolean = true;\n\t\t\t}\n\n\t\t\tif(boolean){\n\t\t\t\tval = \"Visible\";\n\t\t\t}else{\n\t\t\t\tval = \"Collapsed\";\n\t\t\t}\n\t\t\treturn val;\n\t\t});\n\t\tmodule.exports = {\n\t\t\tlocalLabel: localLabel,\n\t\t\tlocalLabel2: localLabel2,\n\t\t\tvisible:visible,\n\t\t\tvisibleValue:visibleValue\n\t\t};\n\t";
        temp8.LineNumber = 2;
        temp8.FileName = "Components/ListItem.ux";
        temp8.SourceLineNumber = 2;
        temp8.SourceFileName = "Components/ListItem.ux";
        temp3.Equals = "Visible";
        temp3.SourceLineNumber = 47;
        temp3.SourceFileName = "Components/ListItem.ux";
        temp3.Nodes.Add(temp9);
        temp3.Bindings.Add(temp16);
        temp9.Margin = float4(15f, 2f, 15f, 2f);
        temp9.SourceLineNumber = 48;
        temp9.SourceFileName = "Components/ListItem.ux";
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp2);
        temp10.Margin = float4(0f, 0f, 0f, 10f);
        temp10.Padding = float4(0f, 10f, 0f, 10f);
        temp10.SourceLineNumber = 49;
        temp10.SourceFileName = "Components/ListItem.ux";
        temp10.Fills.Add(temp11);
        temp10.Children.Add(temp);
        temp11.Color = float4(1f, 0.9843137f, 0.9843137f, 0.4980392f);
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.Color = float4(0f, 0f, 0f, 0.6666667f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 51;
        temp.SourceFileName = "Components/ListItem.ux";
        temp.Bindings.Add(temp12);
        temp4.SourceLineNumber = 51;
        temp4.SourceFileName = "Components/ListItem.ux";
        temp2.Margin = float4(0f, -10f, 0f, 0f);
        temp2.Padding = float4(15f, 10f, 15f, 10f);
        temp2.SourceLineNumber = 53;
        temp2.SourceFileName = "Components/ListItem.ux";
        temp2.Fills.Add(temp13);
        temp2.Children.Add(temp1);
        temp2.Bindings.Add(temp15);
        temp13.Color = float4(0.9686275f, 0.9686275f, 1f, 0.6980392f);
        temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp1.Color = float4(0f, 0f, 0f, 0.6666667f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.Padding = float4(0f, 0f, 0f, 0f);
        temp1.SourceLineNumber = 55;
        temp1.SourceFileName = "Components/ListItem.ux";
        temp1.Bindings.Add(temp14);
        temp5.SourceLineNumber = 55;
        temp5.SourceFileName = "Components/ListItem.ux";
        temp6.SourceLineNumber = 53;
        temp6.SourceFileName = "Components/ListItem.ux";
        temp7.SourceLineNumber = 47;
        temp7.SourceFileName = "Components/ListItem.ux";
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_TheValue_inst);
        __g_nametable.Properties.Add(this_RealLabel_inst);
        this.Children.Add(temp8);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "TheValue";
    static global::Uno.UX.Selector __selector1 = "RealLabel";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Visibility";
}
