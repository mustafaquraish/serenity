/*
 * Copyright (c) 2021, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/SVG/SVGGraphicsElement.h>

namespace Web::SVG {

class SVGGElement final : public SVGGraphicsElement {
    WEB_PLATFORM_OBJECT(SVGGElement, SVGGraphicsElement);

public:
    virtual ~SVGGElement() override = default;

    virtual RefPtr<Layout::Node> create_layout_node(NonnullRefPtr<CSS::StyleProperties>) override;

private:
    SVGGElement(DOM::Document&, DOM::QualifiedName);
};

}
