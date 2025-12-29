#pragma once

#include <cmath>

namespace csc2026 {

class Particle {
public:
    Particle() = default;
    Particle(double px, double py, double pz, double mass);

    double px() const { return m_px; }
    double py() const { return m_py; }
    double pz() const { return m_pz; }
    double mass() const { return m_mass; }

    double pt() const;
    double energy() const;

private:
    double m_px{0.0};
    double m_py{0.0};
    double m_pz{0.0};
    double m_mass{0.0};
};

} // namespace csc2026

